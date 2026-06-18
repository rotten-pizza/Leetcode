class Solution {
public:
bool solve(int index,unordered_set<string>&mp,string &s,vector<int>&memo){
    if(index==s.size())return true;
    if(memo[index]!=-1)return memo[index];
    for(int i=index+1;i<=s.size();i++){
        if(mp.find(s.substr(index,i-index))!=mp.end()){
            bool x=solve(i,mp,s,memo);
            if(x){
                memo[index]=1;
                return x;}
        }
    }
    memo[index]=0;
    return false;
}
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>mp;
        vector<int>memo(s.size(),-1);
        for(int i=0;i<wordDict.size();i++)mp.insert(wordDict[i]);
        return solve(0,mp,s,memo);
    }
};