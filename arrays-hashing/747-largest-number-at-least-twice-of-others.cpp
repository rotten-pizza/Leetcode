class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int large1=0,large2=-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[large1]){
                large2=large1;
                large1=i;
            }
            else if(nums[i]!=nums[large1]){
                if(large2==-1){
                    large2=i;
                }
                else if(nums[large2]<nums[i])large2=i;
            }
        }
        if( nums[large2]*2<=nums[large1])return large1;
        return -1;
    }
};