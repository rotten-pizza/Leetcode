class Solution {
public:
    bool dfs(int node,vector<vector<int>>& graph,vector<int>&vis){
        bool ans=1;
        for(auto &child:graph[node]){
            if(vis[child]==-1){
                // not visited so the color will be opposite of parent
                vis[child]=!vis[node];
                ans&=dfs(child,graph,vis);
            }
            else if(vis[child]==vis[node])// colors same
            {return false;}
        }
        return ans;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        int n=graph.size();
        vector<int>vis(n,-1);
        bool ans=true;
        // -1 not vis, 0 ,1 are colors
        for(int i=0;i<n;i++)if(vis[i]==-1)ans&=dfs(i,graph,vis);
        return ans;
    }
};