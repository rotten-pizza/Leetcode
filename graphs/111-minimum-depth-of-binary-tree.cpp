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
 int speed = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution {
public:
    int depth(TreeNode* root){
        if(root==nullptr)return 0;
        int left=depth(root->left);
        int right=depth(root->right);
        int depth=0;
        if(left==0)depth=right+1;
        else if(right==0)depth=left+1;
        else depth=min(left,right)+1;
        // ans=min(ans,depth);
        return depth;
    }
    int minDepth(TreeNode* root) {
        // if(root==nullptr)return 0;
       return depth(root);
        // return ans;
    }
};