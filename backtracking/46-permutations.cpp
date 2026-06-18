class Solution {
public:
    void fun(vector<vector<int>>&ans,int index,vector<int>&nums,int n){
        if(index==n){ans.push_back(nums);return;}
        for(int i=index;i<n;i++){
            swap(nums[index],nums[i]);
            fun(ans,index+1,nums,n);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        // vector<int>store;
        // vector<bool>vis(nums.size(),false);
        // for(int i=0;i<nums.size();i++)num.insert(nums[i]);
        fun(ans,0,nums,nums.size());
        return ans;
    }
};