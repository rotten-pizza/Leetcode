class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int col=arr[0].size();
        int start=0,end=arr.size()*arr[0].size()-1;
        while(start<=end){
            int mid=(start+end)>>1;
            if(arr[mid/col][mid%col]==target)return true;
            else if(arr[mid/col][mid%col]>target)end=mid-1;
            else start=mid+1;
        }
        return false;
    }
};