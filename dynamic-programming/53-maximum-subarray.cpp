class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        std::ios::sync_with_stdio(0);
    std::cin.tie(0);
        int ans=-1e9,sum=0;
        for(auto &x:nums){
            sum+=x;
            ans=max(sum,ans);
            if(sum<0)sum=0;
        }
        return ans;
    }
};