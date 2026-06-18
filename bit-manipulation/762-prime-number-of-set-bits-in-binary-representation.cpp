class Solution {
public:
        bool isprime(int n){
            return n==2||n==3||n==5||n==7||n==11||n==13||n==17||n==19;
        }
        int setbits(int n){
            int ans=0;
            for(int i=0;i<21;i++){
                if(n&(1))ans++;
                n=n>>1;
            }
            return ans;
        }
    int countPrimeSetBits(int left, int right) {
       
       int ans=0,x;
        for(int i=left;i<=right;i++){
         x=setbits(i);
            if(isprime(x))ans++;
        }
        return ans;
    }
};