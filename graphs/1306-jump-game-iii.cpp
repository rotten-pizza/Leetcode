class Solution {
public:
    bool ifvisited(int x,vector<int>& vis,vector<int>&arr){
        if(x>=arr.size()||x<0)return false;
        if(arr[x]==0)return true;
        if(vis[x]==1)return false;
        vis[x]=1;
        return ifvisited(x-arr[x],vis,arr)||ifvisited(x+arr[x],vis,arr);
    }
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<int>visited(n,0);
        return ifvisited(start,visited,arr);

    }
};