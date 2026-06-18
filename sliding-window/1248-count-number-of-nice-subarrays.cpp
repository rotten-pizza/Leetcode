class Solution {
public:
int lessequalk(vector<int>&nums,int k){
    int sum=0;
    int left=0,right=0,ans=0;
    while(right<nums.size()){
        sum+=nums[right]%2;
        while(sum>k)sum-=nums[left]%2,left++;
        ans+=right-left+1;
        right++;
    }
    return ans;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
       ios_base::sync_with_stdio(0);
    cin.tie(0);
        if(k==0)return lessequalk(nums,k);
        return lessequalk(nums,k)-lessequalk(nums,k-1);
    }
};