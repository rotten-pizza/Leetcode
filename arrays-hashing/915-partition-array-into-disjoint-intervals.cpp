class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);

        vector<int>min_on_right(nums.size(),-1);
        int mini=1e9;
        for(int i=nums.size()-1;i>=0;i--){
            min_on_right[i]=(mini);
            mini=min(nums[i],mini);
        }
        int maxi=nums[0];
        for(int i=0;i<nums.size()-1;i++){
            maxi=max(nums[i],maxi);
            if(maxi<=min_on_right[i])return i+1;
        }
        return -1;
    }
};