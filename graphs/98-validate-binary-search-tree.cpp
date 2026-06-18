/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool is_valid(TreeNode* root, long long left_limit, long long right_limit) {
        if (root == nullptr)
            return 1;
        return root->val > left_limit && root->val < right_limit &&
               is_valid(root->left, left_limit, root->val) &&
               is_valid(root->right, root->val, right_limit);
    }
    bool isValidBST(TreeNode* root) {
         std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        long long x = INT_MIN, y = INT_MAX;
        return is_valid(root, x - 1, y + 1);
    }
};