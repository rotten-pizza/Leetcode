class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto x:nums)sum+=x;
        if(sum%2)return false;
        // vector<vector<int>>t(nums.size(),vector<int>())
       int t[nums.size()+1][sum/2+1];
       for(int i=0;i<nums.size()+1;i++){
           for(int j=0;j<sum/2+1;j++){
               if(j==0)t[i][j]=1;
               else if(i==0)t[i][j]=0;
           }
       }
       for(int i=1;i<nums.size()+1;i++){
            for(int j=1;j<sum/2+1;j++){
               if(nums[i-1]<=j)t[i][j]=t[i-1][j-nums[i-1]]||t[i-1][j];
               else t[i][j]=t[i-1][j];
           }
       }
       return t[nums.size()][sum/2];
    }
};