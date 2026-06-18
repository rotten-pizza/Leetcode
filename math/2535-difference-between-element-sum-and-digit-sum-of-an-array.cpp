class Solution {
public:
    int digit(int x){
        int ans=0;
        while(x){
            ans+=x%10;
            x/=10;
        }
        return ans;
    }
    int differenceOfSum(vector<int>& nums) {
        int digit_sum=0,element_sum=0;
        for(int i=0;i<nums.size();i++){
            element_sum+=nums[i];
            digit_sum+=digit(nums[i]);
        }
        return abs(digit_sum-element_sum);
    }
};