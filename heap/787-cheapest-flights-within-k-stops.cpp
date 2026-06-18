class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        set<pair<int,pair<int,int>>>q;
        vector<int>dis(n,1e9);
        vector<vector<pair<int,int>>>graph(n);
        for(auto x:flights){
            graph[x[0]].push_back({x[1],x[2]});
        }
        dis[src]=0;
        // {stops,{price,node}}
        q.insert({0,{0,src}});
        while(!q.empty()){
            int node=q.begin()->second.second;
            int price=q.begin()->second.first;
            int number_of_stops=q.begin()->first;
            q.erase(q.begin());
            if(number_of_stops>k)continue;
            // if(price>dis[node])continue;
            for(auto x:graph[node]){
                int weight=x.second;
                int child=x.first;
               if(dis[child]>price+weight){
                      dis[child]=price+weight;
                    q.insert({number_of_stops+1,{dis[child],child}});
                }
            }
        }
        if(dis[dst]==1e9)return -1;
        return dis[dst];
    }
};