class Solution {
public:
   
    int giveones(string s){
        int ans=0;
        for(auto x:s)if(x=='1')ans++;
        return ans;
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int,int>>store;
        for(auto &x:strs){
            int ones=giveones(x);
            store.push_back({x.size()-ones,ones});
        }
        int dp[strs.size()+1][m+1][n+1];
        for(int i=0;i<=m;i++)for(int j=0;j<=n;j++)dp[strs.size()][i][j]=0;
        int i=0;
        for(int index=store.size()-1;index>=0;index--){
            for(int target_zero=0;target_zero<=m;target_zero++){
                for(int target_one=0;target_one<=n;target_one++){
                             i=index;
                            int pick=-1e9,not_pick=-1e9;
                            //pick
                            if(store[i].first<=target_zero&&store[i].second<=target_one)pick=1+dp[i+1][target_zero-store[i].first][target_one-store[i].second];
                            // not pick
                            not_pick=dp[i+1][target_zero][target_one];
                            dp[i][target_zero][target_one]=max(pick,not_pick);
                }
            }
        }
        return dp[0][m][n];
    }
};