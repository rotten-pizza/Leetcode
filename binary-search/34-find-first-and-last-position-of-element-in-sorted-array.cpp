class Solution {
public:
    int low_bound(vector<int>& nums, int target){
        int start=0,end=nums.size()-1,ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                ans=mid;
                end=mid-1;
            }
                        else if(nums[mid]>target)end=mid-1;

            else start=mid+1;
        }
        return ans;
    }
    int up_bound(vector<int>& nums, int target,int x){
        int start=x,end=nums.size()-1,ans=x;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                ans=mid;
                start=mid+1;
            }
            else if(nums[mid]<target)start=mid+1;
            else end=mid-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
      int x=low_bound(nums,target),z=-1;
      if(x!=-1)z=up_bound(nums,target,x);
      return {x,z};
    }
};