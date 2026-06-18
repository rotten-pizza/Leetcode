class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        ios::sync_with_stdio(0); cin.tie(0),cout.tie(0);
        int time_poisoned=0,time=0;
        for(int i=0;i<timeSeries.size();i++){

            if(timeSeries[i]<=time){
                if(duration+timeSeries[i]-time-1>=0){time_poisoned+=duration+timeSeries[i]-time;
                time=timeSeries[i]+duration;
                }
            }
            else {
                time_poisoned+=duration;
                time=timeSeries[i]+duration;
            }
        }
            return time_poisoned;
    }
};