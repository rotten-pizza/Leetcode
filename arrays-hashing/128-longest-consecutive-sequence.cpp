class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         cin.tie(nullptr);
        cout.tie(nullptr);
        ios::sync_with_stdio(false);
        int n = nums.size();
        if(n == 0) return n;
        int result = 0, count = 1;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1]) continue;
            if(nums[i] + 1 == nums[i+1]) count++;
            else{
                result = max(result, count); count = 1;
            }
        }
        return max(result, count);

    }
};