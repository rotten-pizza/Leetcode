class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int left=0,open=0,close=0,right=0;
        while(right<s.size()){
            if(s[right]=='(')open++;
            else close++;
            if(close==open){ans+=s.substr(left+1,right-left-1);
                            left=right+1;
                            close=0,open=0;
                           }
            right++;
        }
        return ans;
    }
    
};