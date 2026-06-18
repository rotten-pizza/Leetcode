class Solution {
public:
    // int solve(vector<int>& nums,int difference){
    // int n = nums.size();
    // vector<int> ans;
    // ans.push_back(nums[0]);

    // for (int i = 1; i < n; i++) {
    //     if (nums[i]== ans.back()+difference) {

    //         ans.push_back(nums[i]);
    //     }
    //     else {
    //         int low = lower_bound(ans.begin(), ans.end(),
    //                               nums[i])
    //                   - ans.begin();

    //         ans[low] = nums[i];
    //     }
    // }
    // return ans.size();
    // }
        int longestSubsequence(vector<int> & arr, int difference) {
        //    return solve(arr,difference);
        std::unordered_map<int, int> dp;
        int maxLength = 0;

        for (int num : arr) {
            dp[num] = dp[num - difference] + 1;
            maxLength = std::max(maxLength, dp[num]);
        }

        return maxLength;

        }
    };