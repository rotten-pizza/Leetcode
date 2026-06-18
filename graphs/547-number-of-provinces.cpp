class Solution {
public:
void dfs(int node,vector<int>&vis,vector<vector<int>>&road){
vis[node]=1;
for(auto &child:road[node]){
    if(!vis[child])dfs(child,vis,road);
}
}

int findCircleNum(vector<vector<int>>& roads) {
    int n=roads.size();
vector<int>vis(n,0);
int count_connected=0;
vector<vector<int>>road(n);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j!=i&&roads[i][j]==1)road[i].push_back(j);
    }
}
for(int i=0;i<n;i++){
    if(vis[i]==0){
        dfs(i,vis,road);
        count_connected++;
    }
}
return count_connected;
    }
};