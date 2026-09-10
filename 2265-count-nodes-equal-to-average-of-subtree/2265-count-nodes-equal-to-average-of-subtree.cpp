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
    int countsubtree(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+countsubtree(root->left)+countsubtree(root->right);

    }
    int sumofsubtree(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return root->val+sumofsubtree(root->left)+sumofsubtree(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int count=countsubtree(root);
        int sum=sumofsubtree(root);
        int ans=0;
        if(sum/count==root->val){
            ans++;
        }
        ans+=averageOfSubtree(root->left);
        ans+=averageOfSubtree(root->right);
        return ans;
    }
};