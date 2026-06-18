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
    int solve(TreeNode* root,int& max_sum){
        if(root==nullptr)return 0;
        int leftsum=solve(root->left,max_sum);
        int rightsum=solve(root->right,max_sum);
        if(leftsum<0)leftsum=0;
        if(rightsum<0)rightsum=0;
        max_sum=max(max_sum,leftsum+rightsum+root->val);
        return max(leftsum,rightsum)+root->val;
    }
    int maxPathSum(TreeNode* root) {
          std::ios::sync_with_stdio(false);
        // std::cin.tie(nullptr);
        int ans=INT_MIN;
         solve(root,ans);
         return ans;
    }
};