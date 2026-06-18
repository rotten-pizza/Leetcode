class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        sort(nums.begin(),nums.end());
        int x=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])return nums[i];
        }
    return 1;
    }
};