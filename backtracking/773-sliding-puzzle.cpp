class Solution {
public:
    bool hash[543211];
    int find(string &a){
      for(int i=0;i<6;i++)if(a[i]=='0')return i;
      return -1;
    };
    int slidingPuzzle(vector<vector<int>>& board) {
         string source="";
       string dest="123450";
       for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                source.push_back(board[i][j]+'0');
            }
        }
        // if source ==dest
        if(source==dest)return 0;
        // unordered_set<string>hash;
        queue<string>q;
        q.push(source);
        vector<pair<int,int>>movee={{0,1},{1,0},{-1,0},{0,-1}};
        // hash.insert(source);
        hash[stoi(source)]=1;
        int moves=0;
        while(!q.empty()){
            int len=q.size();
            moves++;
            for(int i=0;i<len;i++){
                string node=q.front();
                q.pop();
                int index_zero=find(node);
                // for(auto x:node){
                //     for(auto y:x)cout<<y<<" ";
                //     cout<<endl;
                // }
                pair<int,int>find_zero={index_zero/3,index_zero%3};
                for(auto &move:movee){
                    int child_x=move.first+find_zero.first;
                    int child_y=move.second+find_zero.second;
                    if(child_x>=0&&child_y>=0&&child_x<2&&child_y<3){
                        swap(node[child_x*3+child_y],node[find_zero.first*3+find_zero.second]);
                        if(node==dest)return moves;
                        int x=stoi(node);
                        if(hash[x]==0){hash[x]=1;q.push(node);}
                        swap(node[child_x*3+child_y],node[find_zero.first*3+find_zero.second]);
                    }
                }
            }
        }
        return -1;
    }
};