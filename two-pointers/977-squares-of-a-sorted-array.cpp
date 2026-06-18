class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int right=nums.size(),n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=0){right=i;break;}
        }
        int left=right-1;
        vector<int>ans;
        while(right<n&&left>=0){
            if(abs(nums[left])<=nums[right]){
                ans.push_back(nums[left]*nums[left]);
                left--;
            }
            else{
                ans.push_back(nums[right]*nums[right]);
                right++;
            }
        }
        while(left>=0)ans.push_back(nums[left]*nums[left--]);
        while(right<n)ans.push_back(nums[right]*nums[right++]);
        return ans;
    }
};