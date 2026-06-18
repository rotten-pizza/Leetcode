class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        // unordered_map<vector<int>,bool>store;
        for(int i=0;i<n-3;i++){
            if(i>0&&nums[i]==nums[i-1])continue;// as already checked for that number
            for(int j=i+1;j<n-2;j++){
                if(j!=(i+1)&& nums[j]==nums[j-1]){continue;}
                int left=j+1,right=n-1;
                long long new_target=-nums[i]-nums[j];
                new_target+=target;
                while(left<right){
                    if(new_target==(long long)(nums[left]+nums[right])){
                        ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                        left++;right--;
                        while(left<right && nums[right+1]==nums[right]){right--;}
                        while(left<right && nums[left]==nums[left-1]){left++;}
                    }
                    else if(new_target<nums[left]+nums[right])right--;
                    else left++;
                }
            }
        }
        return ans;
    }
};