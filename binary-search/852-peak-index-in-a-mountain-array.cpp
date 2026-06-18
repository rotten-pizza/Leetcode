class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,end=arr.size()-1;int N=end+1;
        int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            // cout<<start<<" "<<mid<<" "<<end<<endl;
            if(arr[mid]>arr[(mid-1+N)%N]&& arr[mid]>arr[(mid+1)%N])return mid;
            else if(arr[mid]>arr[(mid-1+N)%N])start=mid+1;
            else end=mid-1;
        if(mid==0)return 1;
        else if(mid==N-1) return mid-1;
        }
        return mid+1;
    }
};