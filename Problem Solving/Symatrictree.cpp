//Given the root of a binary tree, check whether it is a mirror 
//of itself (i.e., symmetric around its center).

#include <iostream>
#include <queue>
#include <stack>
#include <vector>
 using namespace std;

 struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
 };

 //Solve

 bool isMirror(TreeNode* t1, TreeNode* t2){
    if(!t1 && !t2){
        return true;
    }
    if(!t1 || !t2){
        return false;
    }
    return(t1->val == t2->val) && isMirror(t1->left , t2->right) && isMirror(t1->right,t2->left);
 }

bool isSymmetric(TreeNode* root) {
    return isMirror(root, root);

}

int main (){
    
}