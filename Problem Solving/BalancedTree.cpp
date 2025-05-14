#include <iostream>
#include <vector>
#include <cmath> // abs() ফাংশনের জন্য
using namespace std;

struct Treenode {
    int val;
    Treenode* left;
    Treenode* right;

    Treenode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isBalanced(Treenode* root){
        return checkHeight(root) != -1;
    }

private:
    int checkHeight(Treenode* node){
        if(node == NULL){
            return 0;
        }
        int leftHeight = checkHeight(node->left);
        if(leftHeight == -1) return -1; // imbalance found in left

        int rightHeight = checkHeight(node->right);
        if(rightHeight == -1) return -1; // imbalance found in right

        if(abs(leftHeight - rightHeight) > 1){
            return -1; // not balanced
        }

        return max(leftHeight, rightHeight) + 1;
    }
};
