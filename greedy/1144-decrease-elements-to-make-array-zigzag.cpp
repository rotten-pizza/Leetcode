class Solution {
public:
    int even_greater(vector<int>nums){
        int n=nums.size();
        int ans=0;
        for(int i=1;i<n;i+=2){
            if(i+1<n)if(nums[i]>=nums[i+1]){ans+=nums[i]-nums[i+1]+1;nums[i]=nums[i+1]-1;}
            if(nums[i]>=nums[i-1])ans+=nums[i]-nums[i-1]+1;
        }
        // for(auto x:nums)cout<<x<<" ";
        // cout<<endl;
        return ans;
    }
    int odd_greater(vector<int>nums){
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i+=2){
            if(i+1<n)if(nums[i]>=nums[i+1]){ans+=nums[i]-nums[i+1]+1;nums[i]=nums[i+1]-1;}
            if(i-1>=0)if(nums[i]>=nums[i-1])ans+=nums[i]-nums[i-1]+1;
        }
        // for(auto x:nums)cout<<x<<" ";
        // cout<<endl;
        return ans;
    }
    int movesToMakeZigzag(vector<int>& nums) {
        return min(even_greater(nums),odd_greater(nums));
    }
};