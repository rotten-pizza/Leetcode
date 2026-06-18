#include<bits/stdc++.h>
#define ll long long
#define vec vector<long long>
#define ld long double
#define print(v) for(auto c:v)cout<<c<<" "
#define loop(i, n) for (int i = 0; i < n; i++)
#define print_matrix(x) for(int i=0;i<x.size();i++){print(x[i]);cout<<endl;}
using namespace std;
class DSU{
    public:
    vec rank,parent,size;
    DSU(int n){
        parent.resize(n+1); 
        rank.resize(n+1); 
        size.resize(n+1);
        loop(i,n+1){
            parent[i]=i;
            rank[i]=0;
            size[i]=1;
        }
    }
    int find(int node){
        if(parent[node]==node)return node;
        return parent[node]=find(parent[node]);
    }
    void union_rank(int a,int b){
        int parent_a=find(a);
        int parent_b=find(b);
        if(parent_a==parent_b){return;}
        else if(rank[parent_a]>rank[parent_b]){
            parent[parent_b]=parent_a;
        }
        else if(rank[parent_a]<rank[parent_b]){
            parent[parent_a]=parent_b;
        }
        else{
            parent[parent_b]=parent_a;
            rank[parent_a]++;
        }
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
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        // assume the index of points as the node
        vector<pair<int,pair<int,int>>>edges;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                edges.push_back({abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]),{i,j}});
            }
        }
        sort(edges.begin(),edges.end());
        DSU x(n);
        int ans=0;
        for(auto &y:edges){
            if(x.find(y.second.first)!=x.find(y.second.second)){
                x.union_size(y.second.first,y.second.second);
                ans+=y.first;
            }
        }
        return ans;
    }
};