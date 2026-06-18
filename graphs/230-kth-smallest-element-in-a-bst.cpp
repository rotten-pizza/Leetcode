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

TreeNode* ktsmallest(TreeNode* root,int &target){
if(root==nullptr)return nullptr;
TreeNode* left=ktsmallest(root->left,target);
if(left!=nullptr)return left;
target--;
if(target==0)return root;
return ktsmallest(root->right,target);
}
    int kthSmallest(TreeNode* root, int k) {
        return ktsmallest(root,k)->val;
    }
};