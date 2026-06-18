class Solution:
    def solv(self,i,j,text1,text2,dp):
        if i<0 or j<0:
            return 0
        if dp[i][j]!=-1:
            return dp[i][j]
        ans=0
        if text1[i]==text2[j]:
            ans=max(self.solv(i-1,j-1,text1,text2,dp),ans)+1
        else:
            ans=max(self.solv(i-1,j,text1,text2,dp),self.solv(i,j-1,text1,text2,dp))
        dp[i][j]=ans
        return dp[i][j]
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        n=text1.__len__()
        m=text2.__len__()
        dp=[[-1]*m for i in range(n)]
        # self.solv(n-1,m-1,text1,text2,dp)
        return self.solv(n-1,m-1,text1,text2,dp)


        