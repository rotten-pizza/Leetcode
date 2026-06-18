#include<bits/stdc++.h>
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        std::string l="";
        for(int i=s.size()-1;i>=0;){
            int counter=k;
            while(counter&&i>=0){
                if(s[i]!='-')
                {
                if(s[i]>='a'&&s[i]<='z')l.push_back(s[i]-'a'+'A');
                    else l.push_back(s[i]);
                    counter--;}
                i--;
            }
          if (i >= 0 || counter != k)l.push_back('-');
        };
          while(l.empty()==0&&l[l.size()-1]=='-')l.pop_back();
        std::reverse(l.begin(),l.end());
        return l;
    }
};