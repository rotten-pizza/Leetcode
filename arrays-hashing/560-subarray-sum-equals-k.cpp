class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>presum;
        int sum=0,count=0;
        presum[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum-k;
           
               count+=presum[rem];
            presum[sum]++;
            
        }
        return count;
    }

};