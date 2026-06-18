/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void traverse(TreeNode* root,int parent,vector<vector<int>>&graph){
        if(root==nullptr)return;
        graph[parent].push_back(root->val);
        graph[root->val].push_back(parent);
        traverse(root->left,root->val,graph);
        traverse(root->right,root->val,graph);

    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        //convert to graph
        if(k==0)return {target->val};
        vector<vector<int>>graph(501);
        traverse(root->left,root->val,graph);
        traverse(root->right,root->val,graph);
        vector<int>vis(501,0);
        queue<int>q;
        vis[target->val]=1;
        q.push(target->val);
        int level=0;
        while(!q.empty()){
            int len=q.size();
            for(int i=0;i<len;i++){
                for(auto x:graph[q.front()]){
                    if(vis[x]==0){
                        q.push(x);
                        vis[x]=1;
                    }
                }
                q.pop();
            }
            level++;
            if(level==k)break;
        }
vector<int>ans;
while(!q.empty()){
    ans.push_back(q.front());
    q.pop();
}
return ans;
    }
};