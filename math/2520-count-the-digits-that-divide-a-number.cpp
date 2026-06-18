class Solution {
public:
    int countDigits(int num) {
        int x=num,count=0;
        while(x){
            if(num%(x%10)==0)count++;
            x/=10;
        }
        return count;
    }
};