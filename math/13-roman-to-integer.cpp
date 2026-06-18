class Solution {
public:
    int romanToInt(string s) {
        ios_base::sync_with_stdio(0);
        // cin.tie(0);
        vector<int> mp(24);
        int ans=0;
        mp['I'-'A']=1;
        mp['V'-'A']=5;
        mp['X'-'A']=10;
        mp['L'-'A']=50;
        mp['C'-'A']=100;
        mp['D'-'A']=500;
        mp['M'-'A']=1000;
        for(int i=0;i<s.size();i++){
            if(i==s.size()-1){
                ans+=mp[s[i]-'A'];
                break;
            }
            if(mp[s[i]-'A']>=mp[s[i+1]-'A']){
                ans+=mp[s[i]-'A'];
            }
            else {
                ans-=mp[s[i]-'A'];
            }
        }
return ans;
    }
};