class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int ans=1;
        pair<int,int>start={points[0][0],points[0][1]};
        for(int i=1;i<points.size();i++){
            if(points[i][0]>start.second){
                start={points[i][0],points[i][1]};
                ans++;
            }
            else {
                start.second=min(start.second,points[i][1]);
            }
        }
        return ans;
    }
};