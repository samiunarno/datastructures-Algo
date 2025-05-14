//Given a binary tree, find its minimum depth.

//The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

//Note: A leaf is a node with no children.


#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : left(nullptr) , right(nullptr){}
};


class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0; 
        }

 
        if (root->left == NULL) {
            return 1 + minDepth(root->right);
        }


        if (root->right == NULL) {
            return 1 + minDepth(root->left);
        }


        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};