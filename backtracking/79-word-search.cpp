class Solution {
public:
   static bool dfs(pair<int,int>node,vector<vector<char>>& b,vector<vector<int>>&vis,int index,const string &word,        vector<pair<int,int>>&movee
){
        if(index==word.size())return true;
        int x=node.first;
        int y=node.second;
        // vector<pair<int,int>>movee={{0,1},{0,-1},{-1,0},{1,0}};
        bool a=false;
        for(int i=0;i<4;i++){
            int x_child=movee[i].first+x;
            int y_child=movee[i].second+y;
            if(x_child>=0&&y_child>=0&&x_child<b.size()&&y_child<b[0].size()){
                if(vis[x_child][y_child]==0){
                    if(b[x_child][y_child]==word[index]){
                        vis[x_child][y_child]=1;
                         a|=dfs({x_child,y_child},b,vis,index+1,word,movee);
                        vis[x_child][y_child]=0;
                        if(a)return true;
                    }
                }
            }
        }
        return false;
    }
    bool exist(vector<vector<char>>& b, string word) {
         std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        vector<pair<int,int>>indexes;
                vector<pair<int,int>>movee={{0,1},{0,-1},{-1,0},{1,0}};

        for(int i=0;i<b.size();i++){
            for(int j=0;j<b[0].size();j++){
                if(word[0]==b[i][j])indexes.push_back({i,j});
            }
        }
        for(auto &index:indexes){
            vector<vector<int>>vis(b.size(),vector<int>(b[0].size(),0));
            vis[index.first][index.second]=1;
            if(dfs({index},b,vis,1,word,movee))return true;
        }
        return false;
    }
};