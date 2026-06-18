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
    void remove(TreeNode* root,TreeNode* parent,int &target){
        if(root==nullptr)return;
        remove(root->left,root,target);
        remove(root->right,root,target);
        if(root->left==nullptr&&root->right==nullptr&&root->val==target){
            if(parent->left==root)parent->left=nullptr;
            if(parent->right==root)parent->right=nullptr;
            }
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        remove(root->left,root,target);
        remove(root->right,root,target);
         if(root->left==nullptr&&root->right==nullptr&&root->val==target)return nullptr;
         return root;
    }
};