//Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.
//Solve

#include <iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        // Base case: empty tree
        if (root == NULL) {
            return false;
        }

     
        targetSum -= root->val;

        
        if (root->left == NULL && root->right == NULL) {
            return (targetSum == 0);
        }

        
        return hasPathSum(root->left,  targetSum)
            || hasPathSum(root->right, targetSum);
    }
};

