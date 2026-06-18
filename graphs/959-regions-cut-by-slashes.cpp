#include<bits/stdc++.h>
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
        if(a==b)return;
        if(size[b]>size[a])swap(a,b);
        if(b!=a){
            size[a]=size[a]+size[b];
            parent[b]=a;
        }
    }
};
class Solution {
public:

    int regionsBySlashes(vector<string>& grid) {
        int n=grid.size();
        // cout<<grid[1];
        // return 1;
       DSU dsu(4*n*n+1);
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int left=(i*n+j)*4;
            int top=left+1;
            int right=top+1;
            int bottom=right+1;
            if(grid[i][j]==' '){
                dsu.union_size(left,top);
                dsu.union_size(top,right);
                dsu.union_size(right,bottom);
                dsu.union_size(bottom,left);
            }
            else if(grid[i][j]=='/'){
                dsu.union_size(left,top);
                dsu.union_size(right,bottom);
            }
            else{
                // index++;
                dsu.union_size(top,right);
                dsu.union_size(bottom,left);
            }
            // index++;
            if(right+2<i*4*n+4*n)dsu.union_size(right,right+2);
            if(bottom+4*n-2<4*n*n)dsu.union_size(bottom,bottom+4*n-2);
        }
       } 
       int ans=0;
       for(int i=0;i<4*n*n;i++){
        if(dsu.find(i)==i)ans++;
       }
       return ans;
    }
};