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
    void traverse(TreeNode* root,int level,int verti, map<int,multiset<pair<int,int>>>&mp){
        if(root==nullptr)return;
        mp[verti].insert({level,root->val});
        traverse(root->left,level+1,verti-1,mp);
        traverse(root->right,level+1,verti+1,mp);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,multiset<pair<int,int>>>mp;
        traverse(root,0,0,mp);
        vector<vector<int>>ans;
        for(auto &x:mp){
            ans.push_back({});
            for(auto &y:x.second)ans.back().push_back(y.second);
        }
        return ans;
    }
};