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
    void solve(int sum_till,int target,TreeNode* root,vector<int>&store,vector<vector<int>>&ans){
        // if(root==nullptr)return;
        sum_till+=root->val;
        store.push_back(root->val);
        if(sum_till==target&&root->left==nullptr&&root->right==nullptr){
            ans.push_back(store);
            store.pop_back();
            return;
        }
        if(root->left)solve(sum_till,target,root->left,store,ans);
        if(root->right)solve(sum_till,target,root->right,store,ans);
        store.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==nullptr)return {};
        vector<vector<int>>ans;
        vector<int>store;
        solve(0,targetSum,root,store,ans);
        return ans;
    }
};