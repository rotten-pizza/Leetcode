class Solution {
public:
    int totalMoney(int n) {
        int ans=1,track_mon=1;
        for(int i=1;i<n;i++){
            if(i%7==0){
                track_mon-=5;
                ans+=track_mon;
            }
            else {
                track_mon++;
                ans+=track_mon;
            }

        }
        return ans;
    }
};