class Solution {
public:
    bool is_palindrome(string s){
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-1-i])return false;
        }
        return true;
    }
    void solve(int start_index,vector<string>&store,vector<vector<string>>&ans,string s,int n){
        if(start_index==n){
            ans.push_back(store);
            return;
        }
        for(int i=start_index+1;i<=n;i++){
            if(is_palindrome(s.substr(start_index,i-start_index))){
                store.push_back(s.substr(start_index,i-start_index));
                solve(i,store,ans,s,n);
                store.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>store;
        solve(0,store,ans,s,s.size());
        return ans;
    }
};