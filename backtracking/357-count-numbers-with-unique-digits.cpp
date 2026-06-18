class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)return 1;
        int ans=9;
        int fact[10];
        fact[0]=1;
        for(int i=1;i<=9;i++)fact[i]=fact[i-1]*i;
        for(int i=2;i<=n;i++){
                ans+=9*(fact[9]/fact[10-i]);
        }
        return ans+1;
    }
};