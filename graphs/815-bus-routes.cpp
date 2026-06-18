class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if(source==target)return 0;
        swap(source,target);
        unordered_map<int,vector<int>>graph;
        // vis will be for indexes of routes
        unordered_set<int>vis;
        // graph will store at which indexes in routes is the particular stop present
        for(int i=0;i<routes.size();i++){
            if(routes[i].size()==1)continue;
            for(int j=0;j<routes[i].size();j++){
               graph[routes[i][j]].push_back(i);
            }
        }
        int distance=1;//level in bfs
        queue<int>q;
        q.push(source);
        vis.insert(source);
        while(!q.empty()){
            int length=q.size();
            distance++;
            for(int i=0;i<length;i++){
                int node=q.front();
                q.pop();
                for(auto index:graph[node]){
                    for(int j=0;j<routes[index].size();j++){
                        if(routes[index][j]==target)return distance-1;
                        if(vis.find(routes[index][j])==vis.end()){
                            q.push(routes[index][j]);
                            vis.insert(routes[index][j]);
                        }
                    }
                }
            }
        }
        return -1;
    }
};