class Solution {
public:
bool fun(string &s){
    return (s.back()=='a'||s.back()=='e'||s.back()=='i'||s.back()=='o'||s.back()=='u')&&(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u');
}
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

         int prefix[words.size()+1];
        prefix[0]=0;
        for(int i=1;i<=words.size();i++){
            prefix[i]=prefix[i-1]+fun(words[i-1]);
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            ans.push_back(prefix[queries[i][1]+1]-prefix[queries[i][0]]);
        }
        return ans;
    }
};