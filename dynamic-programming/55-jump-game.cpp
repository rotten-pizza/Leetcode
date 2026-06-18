class Solution {
public:
    bool canJump(vector<int>& nums) {
        // ios_base::sync_with_stdio(false);
        // cin.tie(0); cout.tie(0);
        int max_index=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(max_index<i)return false;
            max_index=max(i+nums[i],max_index);
            if(max_index>=n-1)return true;
        }
        return true;
    }
};