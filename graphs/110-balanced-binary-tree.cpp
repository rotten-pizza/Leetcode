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
    int solve(TreeNode* root,bool &ans){
        if(root==nullptr)return 0;
        int left_height=solve(root->left,ans);
        int right_height=solve(root->right,ans);
        ans=ans&(abs(left_height-right_height)<=1);
        return max(left_height,right_height)+1;
    }
    bool isBalanced(TreeNode* root) {
          std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        bool ans=true;
        solve(root,ans);
        return ans;
    }
};