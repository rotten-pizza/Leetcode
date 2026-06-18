class Solution {
public:
    int split_number(vector<int>&nums,int max_sum){
        int capacity=0,number_of_subarrays=1;
        for(int i=0;i<nums.size();i++){
            capacity+=nums[i];
            if(capacity>max_sum){
                capacity=nums[i];
                number_of_subarrays++;
            }
        }
        return number_of_subarrays;
    }
    int splitArray(vector<int>& nums, int k) {
          ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int start=*max_element(nums.begin(),nums.end()),end=accumulate(nums.begin(),nums.end(),0),ans;
        while(start<=end){
            int mid=(start+end)>>1;
            int partition=split_number(nums,mid);
            if(partition<=k){
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return ans;
    }
};