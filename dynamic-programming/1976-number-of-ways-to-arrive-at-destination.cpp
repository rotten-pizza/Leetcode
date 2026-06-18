class Solution {
public:
    int countPaths(int n, vector<vector<int>>& edges) {
      vector<vector<pair<long long ,long long >>>graph(n);
    for(auto x:edges){
        graph[x[0]].push_back({x[1],x[2]});
        graph[x[1]].push_back({x[0],x[2]});
    }
    vector<long long >ways(n,0);
    vector<long long >distance(n,LLONG_MAX);
    long long  mod=(long long) (1e9+7);
    set<pair<long long ,long long >>store;
    distance[0]=0;
    ways[0]=1;
    store.insert({0,0});
    while(!store.empty()){
        auto it=*store.begin();
        long long  node=it.second;
        long long  dis=it.first;
        store.erase(store.begin());
        for(auto it:graph[node]){
            long long  child=it.first;
            long long  weight=it.second;
            if(distance[child]>(dis+weight)){
                distance[child]=dis+weight;
                ways[child]=ways[node];
                store.insert({distance[child],child});
            }
            else if(distance[child]==(dis+weight)){
                ways[child]=ways[child]+ways[node];
                ways[child]%=mod;
            }
        }
    }

return ways[n-1]%mod;
    }
};