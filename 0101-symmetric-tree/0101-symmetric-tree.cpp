/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool Sym(TreeNode* left, TreeNode* right){
        if(left==NULL || right==NULL) return left==right;
        if(left->val !=right->val) return false;
        return Sym(left->left,right->right) && Sym(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        return root==NULL || Sym(root->left,root->right);
    }
};