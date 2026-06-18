class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         ios_base::sync_with_stdio(0), cin.tie(0);
        int n=nums.size();
        vector<int>ans;
        int prefix[n],suffix[n];
        prefix[0]=1,suffix[n-1]=1;
        for(int i=1;i<n;i++){
            prefix[i]=nums[i-1]*prefix[i-1];
            suffix[n-i-1]=nums[n-i]*suffix[n-i];
        }
        for(int i=0;i<n;i++)ans.push_back(prefix[i]*suffix[i]);
        return ans;
    }
};