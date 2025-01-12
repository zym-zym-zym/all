//
// Created by ZhouYM on 2025/1/11.
//

#ifndef NCC_SOLUTION_H
#define NCC_SOLUTION_H
struct TreeNode{
    int val;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};
class Solution {
    void build_Tree();
    void isBinaryTree(TreeNode *root );




};


#endif //NCC_SOLUTION_H
