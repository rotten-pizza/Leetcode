class Solution {
public:
     long long  myPow(long long  x, long long  n) {
        int mod=1e9+7;
        if(x==0)return 0;
        if(n==0)return 1;
        if(n%2==0)return myPow((x*1ll*x)%mod,n/2)%mod;
        else return (x*1ll*myPow(x,n-1))%mod;
        return 1;
    }
    int countGoodNumbers(long long n) {
        long long  even_indexes=n/2+n%2;
        long long  odd_indexes=n/2;
        int ans_odd=1,ans_even=1,mod=1e9+7;
        ans_even=(myPow(5,even_indexes))%mod;
        ans_odd=(myPow(4,odd_indexes))%mod;
        // return ans_even;
        return (ans_even*1ll*ans_odd)%mod;
    }
};