#include<bits/stdc++.h>
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
         ios::sync_with_stdio(0); cin.tie(0),cout.tie(0);
        int index_min=0,index_max=0,n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[index_max])index_max=i;
            if(nums[i]<nums[index_min])index_min=i;
        }
        int ans=1e9;
        if(index_min>index_max)swap(index_max,index_min);
        //remove one from start and one from end
        ans=min(ans,index_min+1+n-index_max);
        //remove both from start
        ans=min(ans,index_max+1);
        ans=min(ans,n-index_min);
        return ans;
    }
};