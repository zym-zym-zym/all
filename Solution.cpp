//
// Created by ZhouYM on 2025/1/11.
//

#include "Solution.h"
void Solution::build_Tree(){
    TreeNode *root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

}

void Solution::isBinaryTree(TreeNode *root) {

}
