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
    TreeNode* min(TreeNode* node){
        while(node->left!=nullptr){
            node=node->left;
        }
        return node;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr)return nullptr;
        if(key<root->val){
            root->left=deleteNode(root->left,key);
        }else if(key>root->val){
            root->right=deleteNode(root->right,key);
        }else{
            //Case 1:Node has no left child
            // in this replace the node with its right child 
            if(root->left==nullptr){
                TreeNode*temp=root->right;
                delete root;
                return temp;
            }
            //Case 2: Node has no right child 
            // in this replase the node with its left child
            else if(root->right==nullptr){
                TreeNode*temp=root->left;
                delete root;
                return temp;
            }
            //Case 3: Node has two children
            //find min successor
            TreeNode* temp=min(root->right);
            root->val=temp->val;
            root->right=deleteNode(root->right,temp->val);
        }
        return root;
    }
};