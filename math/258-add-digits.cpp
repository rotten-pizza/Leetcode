class Solution {
public:
    int addDigits(int num) {
        int ans=0;
        while(num>0){
            ans+=num%10;
            num/=10;
            if(num==0){
                if(ans/10==0)break;
                num=ans;
                ans=0;
            }
        }
        return ans;
    }
};