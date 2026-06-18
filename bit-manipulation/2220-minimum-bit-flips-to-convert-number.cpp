class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x=start^goal,ans=0;
        // can also be done by finding number of set bits in start^goal
        while(x>0){
            ans++;
            x=(x)&(x-1);
        }
        return ans;
    }
};