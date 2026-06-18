class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int increasing=0,decreasing=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])increasing=1;
            if(nums[i]<nums[i-1])decreasing=1;
            if(increasing&decreasing)return false;
        }
        return true;
    }
};