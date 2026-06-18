class Solution {
public:
    void give_subset(int index, vector<int> &nums, vector<vector<int>> &ans,
                     vector<int> &store) {
                        ans.push_back(store);
     

        int last_index=-1;
        for(int i=index;i<nums.size();i++){

            if(last_index==-1||nums[last_index]!=nums[i]){
                //pick
                last_index=i;
                store.push_back(nums[i]);
                
                give_subset(i+1,nums,ans,store);
                store.pop_back();
            }
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> store;
        sort(nums.begin(),nums.end());
        // ans.push_back(store);
        give_subset(0, nums, ans, store);
        return ans;
    }
};