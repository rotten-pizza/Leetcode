class Solution {
public:
    void recur(vector<int>&nums,int &target,int start,int end,int &ans){
        if(start>end)return;
        if(ans!=-1)return;
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            ans=mid;
            return;
        }
        else if(nums[mid]>target){
            recur(nums,target,start,mid-1,ans);
        }
        else if(nums[mid]<target)recur(nums,target,mid+1,end,ans);
    }
    int search(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int ans=-1;
        recur(nums,target,0,nums.size()-1,ans);
        return ans;
    }
};