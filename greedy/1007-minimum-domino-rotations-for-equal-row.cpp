class Solution {
public:
    int solve(int number,vector<int>tops,vector<int>bottom){
        int ans=0;
        for(int i=0;i<tops.size();i++){
            if(tops[i]!=number){
               swap(tops[i],bottom[i]); 
               ans++;
            }
            if(tops[i]!=number)return 1e9;
        }
        return ans++;
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int ans=1e9;
        for(int i=1;i<=6;i++){
            ans=min(solve(i,tops,bottoms),ans);
        }
        for(int i=1;i<=6;i++){
            ans=min(solve(i,bottoms,tops),ans);
        }
        if(ans==1e9)return -1;
        return ans;
    }
};