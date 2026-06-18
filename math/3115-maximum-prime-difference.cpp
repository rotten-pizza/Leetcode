class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        ios::sync_with_stdio(0); cin.tie(0);
        vector<bool>seive(101,0);
        seive[1]=1;
        for(int i=2;i<=100;i++){
            if(seive[i]==0){
                for(int j=i*i;j<=100;j+=i)seive[j]=1;
            }
        }
        int left=1e9,right=-1;
        for(int i=0;i<nums.size();i++){
            if(seive[nums[i]]==0){
                left=min(left,i);
                right=max(right,i);
            }
        }
        return right-left;
    }
};