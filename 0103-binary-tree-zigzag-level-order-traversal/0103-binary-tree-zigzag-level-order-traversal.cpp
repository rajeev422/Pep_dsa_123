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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==nullptr)return res;
        queue<TreeNode*>q;
        bool lefttoright=true;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>elements;
            for(int i=0;i<n;i++){
                TreeNode* frontNode=q.front();
                q.pop();
                elements.push_back(frontNode->val);
                if(frontNode->left)q.push(frontNode->left);
                if(frontNode->right)q.push(frontNode->right);
            }
            if(!lefttoright){
                reverse(elements.begin(),elements.end());
            }
            res.push_back(elements);
            lefttoright=!lefttoright;
        }
        return res;
    }
};