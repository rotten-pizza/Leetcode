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
    bool helper(TreeNode* root1,TreeNode* root2){
        if(root1==nullptr&&root2==nullptr)return true;
        if(root1==nullptr)return false;
        if(root2==nullptr)return false;
        bool left_side=helper(root1->left,root2->right);
        bool right_side=helper(root1->right,root2->left);
        return root1->val==root2->val&&left_side&&right_side;
    }
    bool isSymmetric(TreeNode* root) {
        return helper(root->left,root->right);
    }
};