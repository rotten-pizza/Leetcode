class Solution {
public:
    int dp[1002][1002];

    int solve(int index,int max_score_index,vector<pair<int,int>>&store){
        if(index==store.size())return 0;
        int pick=0,not_pick=0;
        if(dp[index][max_score_index]!=-1)return dp[index][max_score_index];
        //pick
        if(store[max_score_index].second<=store[index].second){
            pick=store[index].second+solve(index+1,index,store);
            }
        else if(store[max_score_index].first==store[index].first){
            pick=store[index].second+solve(index+1,max_score_index,store);
        }
        // not pick
        not_pick=solve(index+1,max_score_index,store);
    return dp[index][max_score_index]=max(pick,not_pick);
    }
    int bestTeamScore(vector<int>& score, vector<int>& ages) {
        memset(dp,-1,sizeof(dp));
        vector<pair<int,int>>store;
        store.push_back({0,0});
        for(int i=0;i<score.size();i++)store.push_back({ages[i],score[i]});
        sort(store.begin(),store.end());
        return solve(0,0,store);
    }
};