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
    TreeNode* moveleft(TreeNode* root){
        while(root->left!=nullptr){root=root->left;}
        return root;
    }
    TreeNode* deleteRoot(TreeNode* root){
        if(root->left==nullptr)return root->right;
        if(root->right==nullptr)return root->left;
        TreeNode* left_child=root->left;
        TreeNode* last_left=moveleft(root->right);
        last_left->left=left_child;
        return root->right;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr)return nullptr;
        if(root->val==key){
        return deleteRoot(root);
        }
        TreeNode* dummy=root;
        while(root!=nullptr){
            if(root->val>key){
               if(root->left&&root->left->val==key){
                root->left=deleteRoot(root->left);
               }
               else root=root->left;
            }
            else {
                if(root->right&&root->right->val==key){
                    root->right=deleteRoot(root->right);
                }
                else root=root->right;
            }
        }
        return dummy;
    }
};