class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // longest array with atmost k 0s
                 ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int ans=0,left=0,right=0,count_0=0;
    while(right<nums.size()){
        if(nums[right]==0)count_0++;
        while(count_0>k){
            if(nums[left]==0)count_0--;
            left++;
        }
        ans=max(ans,right-left+1);
        right++;
    }
    return ans;
    }
};