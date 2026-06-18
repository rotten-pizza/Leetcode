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

    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        if(pairs.size()==0)return s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout.tie(NULL);
    DSU dsu(s.size());
    for(auto &x:pairs){
        if(dsu.find(x[0])!=dsu.find(x[1]))dsu.union_size(x[0],x[1]);
    }
    // find how many independent components with size>1
    vector<vector<int>>mp(s.size());
    for(int i=0;i<s.size();i++){
        mp[dsu.find(i)].push_back(i);
    }
    for(auto id:mp){
        string store="";
        for(auto i:id)store+=s[i];
        sort(store.begin(),store.end());
        // ids are in sorted order
        for(int i=0;i<id.size();i++)s[id[i]]=store[i];
    }
    return s;
    }
};