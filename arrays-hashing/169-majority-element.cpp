class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios::sync_with_stdio(0); cin.tie(0);
        int ele=nums[0],count=1;
        for(int i=1;i<nums.size();i++){
            if(ele==nums[i])count++;
            else count--;
            if(count==0)ele=nums[i],count=1;
        }
        return ele;
    }
};