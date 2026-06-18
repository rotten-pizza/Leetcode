class Solution {
public:
    void nextPermutation(vector<int>& nums) {
                 ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    int break_point=-1,n=nums.size();
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            break_point=i;
            break;
        }
    }
    if(break_point==-1){
        reverse(nums.begin(),nums.end());
        return;
    }
    int index=break_point+1;
    for(int i=break_point+2;i<n;i++){
        if(nums[i]>nums[break_point]){
            if(nums[i]<=nums[index]){
                index=i;
            }
        }
    }
    swap(nums[index],nums[break_point]);
    reverse(nums.begin()+break_point+1,nums.end());
    return;
    }
};