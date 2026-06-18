#define ll long long
#define vec vector<int>
#define ld long double
#define print(v) for(auto c:v)cout<<c<<" "
#define loop(i, n) for (int i = 0; i < n; i++)
#define print_matrix(x) for(int i=0;i<x.size();i++){print(x[i]);cout<<endl;}
using namespace std;
class DSU{
    public:
    vec parent,size;
    DSU(int n){
        parent.resize(n+1); 
        // rank.resize(n+1); 
        size.resize(n+1);
        loop(i,n+1){
            parent[i]=i;
            // rank[i]=0;
            size[i]=1;
        }
    }
    int find(int node){
        if(parent[node]==node)return node;
        return parent[node]=find(parent[node]);
    }
    
    void union_size(int a,int b){
        a=find(a);
        b=find(b);
        if(size[b]>size[a])swap(a,b);
        if(b!=a){
            size[a]=size[a]+size[b];
            parent[b]=a;
        }
    }
};
class Solution {
public:
   bool is_valid(int x,int y,int n,int m){
        return x>=0&&y>=0&&y<m&&x<n;
    }
    int largestIsland(vector<vector<int>>& grid) {
          std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
       int n=grid.size(),m=grid[0].size();
        DSU dsu(n*m);
        vector<pair<int,int>>move={{0,1},{1,0},{0,-1},{-1,0}};
        loop(i,n)loop(j,m){
            if(grid[i][j]==0)continue;
            for(auto movee:move){
                int childx=movee.first+i;
                int childy=movee.second+j;
                if(is_valid(childx,childy,n,m)&&grid[childx][childy]==1){
                    if(dsu.find(i*m+j)!=dsu.find(childx*m+childy)){
                        dsu.union_size(i*m+j,childx*m+childy);
                    }
                }
            }
        }
        int ans=0;
        loop(i,n)loop(j,m){
            if(grid[i][j]==0){
                int store=0;
                unordered_set<int>parent_find;
                for(auto movee:move){
                int childx=movee.first+i;
                int childy=movee.second+j;
                if(is_valid(childx,childy,n,m)&&grid[childx][childy]==1){
                    if(parent_find.find(dsu.find(childx*m+childy))==parent_find.end()){store+=dsu.size[dsu.find(childx*m+childy)];
                        parent_find.insert(dsu.find(childx*m+childy));
                    }
                }
            }
            ans=max(store+1,ans);
            }
            else ans=max(ans,dsu.size[dsu.find(i*m+j)]);
        }
        return ans;
    }
};