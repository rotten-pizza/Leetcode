class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
    int ans=0,set_bits=0;
    for(int i=0;i<32;i++){
set_bits=0;
        for(int j=0;j<nums.size();j++){
            if((1<<i)&(nums[j]))set_bits++;
        }
        ans+=set_bits*(nums.size()-set_bits);
    }
    return ans;
    }
};