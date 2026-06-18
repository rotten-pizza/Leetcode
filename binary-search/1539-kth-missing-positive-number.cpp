class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        // cout.tie(0);
        // case when missing is beyond the range
        if(arr.back()-arr.size()<k)return arr.back()+k-(arr.back()-arr.size());
        // when missing is before the first element
        if(arr[0]>k)return k;
        int ans=-1,start=0,end=arr.size()-1;
        while(start<=end){
            int mid=(start+end)>>1;
             if(arr[mid]-mid-1>=k)end=mid-1;
            else start=mid+1;
        }
        return k-(-end-1);
    }
};