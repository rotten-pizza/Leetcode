class Solution {
public:
    void dfs(int node,int parent,vector<vector<int>>&graph,vector<int>&time,vector<int>&low_time,vector<vector<int>>&store,vector<int>&vis){
        vis[node]=1;
        time[node]=time[parent]+1;
        low_time[node]=time[node];
        for(auto child:graph[node]){
            if(vis[child]==0){
                dfs(child,node,graph,time,low_time,store,vis);
            }
            if(child!=parent)low_time[node]=min(low_time[child],low_time[node]);
            if(child!=parent&&low_time[child]>time[node])store.push_back({node,child});
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        vector<vector<int>>graph(n),store;
        for(auto &x:connections){
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        vector<int>time(n+1,-1),low_time(n+1,1e9),vis(n,0);
        time[n]=0,low_time[n]=0;
        dfs(0,n,graph,time,low_time,store,vis);
        return store;
    }
};