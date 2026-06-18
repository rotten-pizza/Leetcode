class Solution {
public:
    int jump(vector<int>& nums) {
           ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
    int left=0,right=0,jumps=0;

    while(right<nums.size()-1){
        int farthest=0;
        jumps++;
        for(int i=left;i<=right;i++){
            farthest=max(farthest,nums[i]+i);
        }
        left=right+1;
        right=farthest;
    };
    return jumps;
    }
};