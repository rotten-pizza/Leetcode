class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string store="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==32||i==0){
                if(i==0&&s[i]!=32)store.push_back(s[i]);
                if(store.empty())continue;
                reverse(store.begin(),store.end());
                ans+=store;
                if(i!=0)ans+=" ";
                store="";
            }
            else {
                store.push_back(s[i]);
            }

        }
        while(ans.back()==32)ans.pop_back();
return ans;
    }
};