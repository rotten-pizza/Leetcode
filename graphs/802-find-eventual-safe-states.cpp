#include<bits/stdc++.h>
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
         ios::sync_with_stdio(NULL);
        cin.tie(0);
        cout.tie(0);
        int n=graph.size();
        vector<vector<int>>graph1(graph.size());
        vector<int>inorder(graph.size(),0);
        for(int i=0;i<graph.size();i++){
            for(int j=0;j<graph[i].size();j++){
                graph1[graph[i][j]].push_back(i);
                inorder[i]++;
            }
        }
        vector<int>ans;
        queue<int>q;
        for(int i=0;i<n;i++){
            if(inorder[i]==0)q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto child:graph1[node]){
                inorder[child]--;
                if(inorder[child]==0)q.push(child);
            }
            ans.push_back(node);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};