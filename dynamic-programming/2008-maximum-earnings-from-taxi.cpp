#define ll long long
class Solution {
public:
    long long dp[40000];
    int upper(int target,vector<vector<int>>&rides){
        int start=0,end=rides.size()-1,ans=rides.size();
        while(start<=end){
            int mid=(start+end)/2;
            if(rides[mid][0]>=target){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    };
    long long solve (int index,vector<vector<int>>&rides){
        if(index==rides.size())return 0;
        if(dp[index]!=-1)return dp[index];
        long long  pick=0,not_pick=0;
        // pick
        pick=rides[index][2]+rides[index][1]-rides[index][0]+solve(upper(rides[index][1],rides),rides);
        not_pick=solve(index+1,rides);
        return dp[index]=max(pick,not_pick);
    }
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        memset(dp,-1,sizeof(dp));
        sort(rides.begin(),rides.end());
        return solve(0,rides);
    }
};