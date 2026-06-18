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

    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout.tie(NULL);
        int low=0;
        for(int i=0;i<edges.size();i++){
            if(edges[i][0]==3){swap(edges[low],edges[i]);low++;}
        }
        DSU alice(n), bob(n);
        int removed=0;
        for(auto &x:edges){
            if(x[0]==3){
                if(alice.find(x[1])!=alice.find(x[2])){
                    alice.union_size(x[1],x[2]);
                }
                if(bob.find(x[1])!=bob.find(x[2])){
                    bob.union_size(x[1],x[2]);
                }
                else removed++;
            }
            else if(x[0]==1){
                if(alice.find(x[1])!=alice.find(x[2])){
                    alice.union_size(x[1],x[2]);
                }
                else removed++;
            }
            else{
                 if(bob.find(x[1])!=bob.find(x[2])){
                    bob.union_size(x[1],x[2]);
                }
                else removed++;
            }
        }
        // checking if they can fully traverse graph
        if(alice.size[alice.find(1)]<n||bob.size[bob.find(1)]<n)return -1;
        return removed;
    }
};