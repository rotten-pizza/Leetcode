class Solution {
public:
bool match(string &s, string &t){
    int index=0;
    for(int i=0;i<t.size();i++){
        while(index<s.size()&&t[i]!=s[index]){
            if(s[index]>='A'&&s[index]<='Z')return false;
           index++;
            }
        if(index==s.size())return false;
        index++;
    }
    for(int i=index;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z')return false;
    }
    return true;
}
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool>ans;
        for(auto q:queries){
            ans.push_back(match(q,pattern));
        }
        return ans;
    }
};