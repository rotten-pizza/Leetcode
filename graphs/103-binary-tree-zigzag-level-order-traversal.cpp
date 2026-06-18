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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==nullptr)return {};
        bool flag_for_left_to_right=true;
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        while(!q.empty()){
            int len=q.size();
            ans.push_back({});
            for(int i=0;i<len;i++){
                if(q.front()->left)q.push(q.front()->left);
                if(q.front()->right)q.push(q.front()->right);
                ans.back().push_back(q.front()->val);
                q.pop();
            }
            if(flag_for_left_to_right==true){
                flag_for_left_to_right=0;
            }
            else {
                flag_for_left_to_right=1;
                reverse(ans.back().begin(),ans.back().end());
            }
        }
        return ans;
    }
};