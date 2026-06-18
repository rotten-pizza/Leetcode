class Solution {
public:
    bool isIsomorphic(string s, string t) {
        ios_base::sync_with_stdio(0);
        // cin.tie(0);
        if(s.size()!=t.size())return 0;
        vector<int>map(256,-1);
        vector<int>map2(256,-1);
        
        for(int i=0;i<s.size();i++){
            if(map[t[i]]==-1&&map2[s[i]]==-1){
                map[t[i]]=s[i];
                map2[s[i]]=t[i];
            }
            else if(map[t[i]]==s[i]&& map2[s[i]]==t[i]){
                continue;
            }
            else return false;
        }
        return true;
    }
};