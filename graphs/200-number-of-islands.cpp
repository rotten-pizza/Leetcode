#define ll long long
#define vec vector<long long>
#define ld long double
#define print(v) for(auto c:v)cout<<c<<" "
#define loop(i, n) for (int i = 0; i < n; i++)
#define print_matrix(x) for(int i=0;i<x.size();i++){print(x[i]);cout<<endl;}
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
bool is_valid(int x,int y,int n,int m){
    return x>=0&&x<n&&y>=0&&y<m;
}
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
         ios_base::sync_with_stdio(0), cin.tie(0);
        int n=grid.size(),m=grid[0].size();
        DSU mat(n*m);
        // to convert to index
        vector<pair<int,int>>move={{0,1},{0,-1},{1,0},{-1,0}};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='0')continue;
                for(auto movee:move){
                    int x=movee.first+i;
                    int y=movee.second+j;
                    if(is_valid(x,y,n,m)&&grid[x][y]=='1'){
                        mat.union_size(i*m+j,x*m+y);
                    }
                }
            }
        }
        int ans=0;
        for(int i=0;i<n*m;i++)if(mat.parent[i]==i&&grid[i/m][i%m]=='1')ans++;
        return ans;
    }
};