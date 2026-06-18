class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int ans=0,n=points.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==i)continue;
                int distance=(points[i][1]-points[j][1])*(points[i][1]-points[j][1])+(points[i][0]-points[j][0])*(points[i][0]-points[j][0]);
                for(int k=j+1;k<n;k++){
                   if(k==i)continue;
                    if(distance==(points[i][1]-points[k][1])*(points[i][1]-points[k][1])+(points[i][0]-points[k][0])*(points[i][0]-points[k][0])){
                        ans+=2;
                    }
                }
            }
        }
        return ans;
    }
};