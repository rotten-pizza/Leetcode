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
    int removeStones(vector<vector<int>>& stones) {
                    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int row_max=0,col_max=0;
    for(auto &x:stones){
        row_max=max(row_max,x[0]);
        col_max=max(col_max,x[1]);
    }
       DSU dsu(row_max+1+col_max);
       int components=stones.size();
       for(auto &x:stones){
        if(dsu.find(x[0])!=dsu.find(x[1]+row_max+1)){
            dsu.union_size(x[0],x[1]+row_max+1);
        }
       }
       unordered_set<int>par;
       for(auto &x:stones){
        par.insert(dsu.find(x[0]));
        par.insert(dsu.find(x[1]+row_max+1));
       }
       cout<<par.size();
       return stones.size()-par.size();
    }
};