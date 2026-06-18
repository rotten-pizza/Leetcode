class Solution {
public:
    void solve(int node,vector<int>&color,vector<vector<int>>&graph){ 
            // color[node-1]=x;
            int col[5]={0};
            for(auto child:graph[node]){
                if(color[child-1]!=-1)
col[color[child-1]]=1;        
            }
            for(int i=1;i<=4;i++){
                if(col[i]==0){color[node-1]=i;return;}
               
            }

    }
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<vector<int>>graph(n+1);
        for(auto x:paths){
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
                         }
        vector<int>ans(n,-1);
        for(int i=1;i<n+1;i++){
            if(ans[i-1]==-1)solve(i,ans,graph);
        }
        return ans;
    }
};