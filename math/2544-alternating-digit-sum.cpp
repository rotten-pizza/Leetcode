class Solution {
public:
    int alternateDigitSum(int n) {
        bool flag=1,is_even=1;
        int ans=0;
        while(n){
            if(flag){
                ans+=n%10;
            }
            else {ans-=n%10;}
            flag=!flag;
            is_even=!is_even;
            n/=10;
        }
        if(is_even)ans=-ans;
        return ans;
    }
};