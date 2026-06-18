class Solution {
public:
int find_first(int x){
    int ans=0;
    while(x>0){
        ans=x;
        x/=10;
    }
    return ans;
}
    int countBeautifulPairs(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int x=find_first(nums[i]);
            for(int j=i+1;j<nums.size();j++){
                    ans+=__gcd(x,nums[j]%10)==1;
            }
        }
        return ans;
    }
};