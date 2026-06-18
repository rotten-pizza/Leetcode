class Solution {
public:
    int divide(int dividend, int divisor) {
        std::ios_base::sync_with_stdio(false);
        std::cout.tie(0);

        if(divisor==1){
            return dividend;
        }
        if(divisor==-1){
            if(dividend==INT_MIN)return INT_MAX;
            else return -dividend;
        }
        if(divisor==INT_MAX){
            if(dividend==INT_MIN)return -1;
            else if(dividend==INT_MAX)return 1;
            else return 0;
        }
        else if(divisor==INT_MIN)return divisor==dividend;
        int sign_divisor=1,sign_dividend=1;
        if(divisor<0)sign_divisor=-1;
        if(dividend<0)sign_dividend=-1;
        int ans=0;
        if(sign_divisor==sign_dividend){
            if(sign_divisor==-1){
                while(divisor>=dividend){
                    dividend-=divisor;
                    ans++;
                }
            }
            else {
                while(dividend>=divisor){
                    dividend-=divisor;
                    ans++;
                }
            }
        }
        else{
            if(sign_divisor==-1){
                divisor=-divisor;
            while(dividend>=divisor){
                ans--;
                dividend-=divisor;
            }
            }
            else {
                divisor=-divisor;
                while(dividend<=divisor){
                ans--;
                dividend-=divisor;
            }
            }
        }
        return ans;
    }
};