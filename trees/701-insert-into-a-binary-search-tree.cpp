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

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* x=root;
        if(root==nullptr)return root=new TreeNode(val);
        while(1){
            if(root->val>val){
                if(root->left==nullptr){
                    TreeNode* left=new TreeNode(val);
                    root->left=left;
                    break;
                }
                root=root->left;
            
            }
            else {
                if(root->right==nullptr){
                    root->right=new TreeNode(val);
                    break;
                }
                root=root->right;}
        }
        return x;
    }
};