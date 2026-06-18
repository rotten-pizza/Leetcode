class Solution {
public:
    int low_bound(vector<int>&arr){
        int start=0,end=arr.size()-1,ans=-1;
        while(start<=end){
            int mid=(start+end)>>1;
            if(arr[mid]>=0){
                start=mid+1;
                ans=mid;
            }
            else {
                end=mid-1;
            }
        }
        return ans;
    }
    int countNegatives(vector<vector<int>>& grid) {
       int ans=0,n=grid.size(),m=grid[0].size();
       for(int i=0;i<n;i++){
        // if(i==1)return low_bound(grid[i]);
        ans+=m-low_bound(grid[i])-1;
       } 
       return ans;
    }
};