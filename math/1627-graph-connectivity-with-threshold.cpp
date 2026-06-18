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
    vector<bool> areConnected(int n, int threshold, vector<vector<int>>& queries) {
            std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

        DSU store(n+1);
       for(int k=threshold+1;k<=n/2;k++)
            for(int j=2*k;j<=n;j+=k){
                store.union_size(k,j);
            }
        vector<bool>ans;
        for(auto &q:queries){
            if(store.find(q[0])==store.find(q[1]))ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};