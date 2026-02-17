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
    TreeNode* insertIntoBST(TreeNode* root, int vall) {
        TreeNode* temp=new TreeNode(vall);
        if(root==nullptr)return temp;
        if(vall<root->val && root->left==nullptr){
            root->left=new TreeNode(vall);
        }
        if(vall>root->val && root->right==nullptr){
            root->right=new TreeNode(vall);
        }
        if(vall>root->val){
            insertIntoBST(root->right,vall);

        }else{
            insertIntoBST(root->left,vall);
        }
        return root;
    }
};