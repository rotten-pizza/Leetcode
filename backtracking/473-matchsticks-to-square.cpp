class Solution {
public:
    bool solve(int index,vector<int>&sticks,vector<int>&side,int x){
        if(index==sticks.size()){
            for(int i=0;i<4;i++){
                if(side[i]!=x)return false;
            }
            return true;
        }
        bool ans=0;
        for(int i=0;i<4;i++){
            if(side[i]+sticks[index]>x)return 0;
            side[i]+=sticks[index];
            ans|=solve(index+1,sticks,side,x);
            side[i]-=sticks[index];
            if(ans==1)return 1;
        }
        return ans;
    }
    bool makesquare(vector<int>& matchsticks) {
        int x=0;
        sort(matchsticks.begin(),matchsticks.end());
        for(auto y:matchsticks)x+=y;
        if(x%4!=0)return 0;
        x/=4;
        for(auto y:matchsticks)if(y>x)return 0;
    vector<int>side(4,0);
    return solve(0,matchsticks,side,x);
    }
};