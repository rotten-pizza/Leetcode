class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>ans;
        int xor_sum=0,to_reach=(1<<(maximumBit))-1;
        for(int i=0;i<nums.size();i++){
            xor_sum^=nums[i];
            ans.push_back(to_reach^xor_sum);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};