class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sol=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)return 0;
            if(nums[i]<0)sol*=-1;
        }
        return sol;
    }
};