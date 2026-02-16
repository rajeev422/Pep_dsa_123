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
    int height(TreeNode* root){
        if(root==nullptr)return 0;
        int h1=height(root->left);
        if(h1==-1)return -1;
        int h2=height(root->right);
        if(h2==-1)return -1;
        if(abs(h1-h2)>1)return -1;
        return 1+max(h1,h2);
    }
    bool isBalanced(TreeNode* root) {
        int res=height(root);
        if(res==-1)return false;
        return true;
    }
};