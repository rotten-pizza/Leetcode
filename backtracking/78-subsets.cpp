class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=1<<nums.size();
        vector<vector<int>>ans(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<32;j++){
                if((1<<j)&i)ans[i].push_back(nums[j]);
            }
        }
        return ans;
    }
};