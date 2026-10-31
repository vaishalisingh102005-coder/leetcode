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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL) return false;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int x1=0;
            int y1=0;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->val==x) x1=1;
                if(node->val==y) y1=1;
                if(node->left !=NULL && node->right!=NULL){
                    if((node->left->val==x && node->right->val==y)||(node->right->val==x && node->left->val==y)){
                        return false;
                    }
                }
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);

            }
            if(x1==1 && y1==1) return true;
        }
        return false;
    }
};