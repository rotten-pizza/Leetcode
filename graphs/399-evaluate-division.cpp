class Solution {
public:
    double bfs(string start,string end, unordered_map<string,vector<pair<string,double>>>&graph){
        double ans=1;
        unordered_map<string,int>vis;
        queue<pair<string,double>>q;
        vis[start]=1;
        q.push({start,1});
        while(!q.empty()){
            int len=q.size();
            for(int i=0;i<len;i++){
                string node=q.front().first;
                double cost=q.front().second;
                q.pop();
                for(auto x:graph[node]){
                    string child=x.first;
                    double weight=x.second;
                    if(vis[child]==0){
                        vis[child]=1;
                        q.push({child,cost*weight});
                        if(end==child)return cost*weight;
                    }
                }
            }
        }
        return -1;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
    unordered_map<string,vector<pair<string,double>>>graph;
    unordered_map<string,int>check;
    for(int i=0;i<equations.size();i++){
        graph[equations[i][0]].push_back({equations[i][1],values[i]});
        graph[equations[i][1]].push_back({equations[i][0],1/values[i]});
        check[equations[i][0]]=1;
        check[equations[i][1]]=1;
    }
    vector<double>ans;
    for(auto q:queries){
       if(q[0]==q[1]){
        if(check[q[0]]==0)ans.push_back(-1);
        else ans.push_back(1);
       }
       else{
        if(check[q[0]]==1&&check[q[1]]==1){
            ans.push_back(bfs(q[0],q[1],graph));
        }
        else ans.push_back(-1);
       }
    }
    return ans;
    }
};