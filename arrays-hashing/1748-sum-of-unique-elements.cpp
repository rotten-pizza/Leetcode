class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int>mp(101,0);
        int ans=0;
        for(int i=0;i<nums.size();i++)mp[nums[i]]++;
        for(int i=0;i<101;i++){
            if(mp[i]==1)ans+=i;
        };
        return ans;
    }
};