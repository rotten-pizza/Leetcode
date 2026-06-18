class Solution {
public:
    int reverse(int x) {
        int sign=x>0?1:-1;
        int ans=0;
        // int ans=1;
        while(x>0||x<0){
            if(sign>0){
                if((INT_MAX-x%10)/10<ans)
                return 0;}
                else if(sign<0){
                    if((INT_MIN-x%10)/10>ans)return 0;
                }
            ans=ans*10+(x%10);
            x/=10;
        }
        return ans;
    }
};