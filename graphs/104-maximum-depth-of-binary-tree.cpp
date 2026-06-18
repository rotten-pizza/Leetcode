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
    int depth(TreeNode* root,int &ans){
        if(root==nullptr)return 0;
        int left_depth=depth(root->left,ans);
        int right_depth=depth(root->right,ans);
        int dep=max(left_depth,right_depth)+1;
        ans=max(ans,dep);
        return dep;
    }
    int maxDepth(TreeNode* root) {
        int ans=0;
        depth(root,ans);
        return ans;
    }
};