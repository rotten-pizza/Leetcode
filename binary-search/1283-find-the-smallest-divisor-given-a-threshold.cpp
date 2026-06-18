class Solution {
public:
bool if_possible(vector<int>&nums,int divisor,int threshold){
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans+=nums[i]/divisor+!(nums[i]%divisor==0);
    }
    return ans<=threshold;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
         ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int start=1,end=*max_element(nums.begin(),nums.end())+1,ans;
        while(start<=end){
            int mid=(start)+(end-start)/2;
            if(if_possible(nums,mid,threshold)){
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return ans;
    }
};