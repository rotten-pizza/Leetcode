class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans=0,start=1,end=nums.size()-2,n=nums.size();
        if(nums.size()==1)return 0;
        if(nums[0]>nums[1])return 0;
        if(nums[n-1]>nums[n-2])return n-1;
        while(start<=end){
            int mid=(start+end)>>1;
            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid]>nums[mid-1]){
                start=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        return 0;
    }
};