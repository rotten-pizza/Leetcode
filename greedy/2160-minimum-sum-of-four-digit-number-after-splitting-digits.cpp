class Solution {
public:
    int minimumSum(int num) {
        vector<int>dig;
        int ans=1e9;
        while(num>0){
            dig.push_back(num%10);
            num/=10;
        }
        sort(dig.begin(),dig.end());
    return min(dig[0]*10+dig[1]*10+dig[2]+dig[3],dig[0]*100+dig[1]*10+dig[2]+dig[3]);
    }
};