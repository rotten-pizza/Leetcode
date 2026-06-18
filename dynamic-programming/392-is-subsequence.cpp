class Solution {
public:
    bool isSubsequence(string s, string t) {
       int n=s.length();
       int m=t.length();
       int y=0;
       int count=0;
       for(int i=0;i<n;i++)
       for(int j=y;j<m;j++)if(s[i]==t[j]){count++,y=j+1;break;}
       return count==n;
    }
};