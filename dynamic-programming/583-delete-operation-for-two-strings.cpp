class Solution {
public:
    int minDistance(string text1, string text2) {
         int dp[text1.size()+1][text2.size()+1];
        string s1 = text1, s2 = text2;
        // tabulation
        // base case
        for (int i = 0; i <= text1.size(); i++)
            dp[i][0] = 0;
        for (int j = 0; j <= text2.size(); j++)
            dp[0][j] = 0;
        // code
        for (int i = 1; i <= text1.size(); i++) {
            for (int j = 1; j <= text2.size(); j++) {
                if (s1[i-1] == s2[j-1])
                     dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return s1.size()+s2.size()-2*dp[s1.size()][s2.size()];
    }
};