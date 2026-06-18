class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int left=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ans=max(ans,i-left+1);
            }
            else {left=i+1;}
        }
        return ans;
    }
};