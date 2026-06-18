class Solution {
public:
int hcf(int a,int b){
    if(b==0)return a;
    return hcf(b,a%b);
}
    int findGCD(vector<int>& nums) {
        int maxi=nums[0],mini=nums[0];
        for(int i=1;i<nums.size();i++){maxi=max(maxi,nums[i]),mini=min(mini,nums[i]);}
        return __gcd(maxi,mini);
    }
};