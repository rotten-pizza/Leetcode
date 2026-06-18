class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
    int x=*max_element(nums.begin(),nums.end());
    x=x*k+(((k-1)*k)>>1);
    return x;
    }
};