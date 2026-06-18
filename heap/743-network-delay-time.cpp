class Solution {
public:
    int networkDelayTime(vector<vector<int>>& edges, int n, int k) {
         n=n+1;
           vector<vector<pair<int,int>>>graph(n);
       for (auto x : edges) {
  graph[x[0]].push_back({x[1], x[2]});
};
set<pair<int, int>> store;
vector<int> distance(n , 1e9);
int src = k;
distance[src] = 0;
store.insert({0, src});
while (!store.empty()) {
  auto it = *(store.begin());
  int node = it.second;
  int dis = it.first;
  store.erase(store.begin());
  for (auto iter : graph[node]) {
    int child = iter.first;
    int weight = iter.second;
    if (dis + weight < distance[child]) {
      if(distance[child]!=1e9)store.erase({distance[child],child});
      distance[child] = dis + weight;
      store.insert({distance[child], child});
    }
  }
}
int ans=0;
for(int i=1;i<n;i++){
    if(distance[i]==1e9)return -1;
    ans=max(ans,distance[i]);
}
return ans;
    }
};