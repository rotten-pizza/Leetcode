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
    void solve(int &ans,TreeNode* root,int store){
        store*=10;
        store+=root->val;
        if(root->left)solve(ans,root->left,store);
        if(root->right)solve(ans,root->right,store);
        if(root->left==nullptr&&root->right==nullptr)ans+=store;
    }
    int sumNumbers(TreeNode* root) {
        int ans=0,store=0;
        solve(ans,root,store);
        return ans;
    }
};