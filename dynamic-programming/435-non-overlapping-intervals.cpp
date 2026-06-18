class Solution {
public:
static bool compare(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}
    int eraseOverlapIntervals(vector<vector<int>>& store) {
        vector<pair<int,int>>intervals;
        for(int i=0;i<store.size();i++)intervals.push_back({store[i][0],store[i][1]});
        sort(intervals.begin(),intervals.end(),compare);
        int count=0,free_time=-100000;
        for(int i=0;i<intervals.size();i++){
            if(free_time<=intervals[i].first){
                count++;
                free_time=intervals[i].second;
            }
        }
        return intervals.size()-count;
    }
};