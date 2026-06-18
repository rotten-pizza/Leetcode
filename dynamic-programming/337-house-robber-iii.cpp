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
    int solve(TreeNode* root,bool robbed, map<pair<TreeNode*,bool>,int>&dp){
        if(root==nullptr)return 0;
        if(dp.find({root,robbed})!=dp.end())return dp[{root,robbed}];
        int ans=0;
        // if parent robbed
        if(robbed==1)ans=solve(root->left,!robbed,dp)+solve(root->right,!robbed,dp);
        else ans=max(solve(root->left,1,dp)+solve(root->right,1,dp)+root->val,solve(root->left,0,dp)+solve(root->right,0,dp));
        return dp[{root,robbed}]=ans;
    }
    int rob(TreeNode* root) {
        map<pair<TreeNode*,bool>,int>dp;
        return solve(root,0,dp);
    }
};