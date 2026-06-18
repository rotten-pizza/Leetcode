class Solution {
public:
    string shortestCommonSupersequence(string a, string b) {
        
int n=a.size(),m=b.size();
vector<vector<int>>dp(n+1,vector<int>(m+1,0));
for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		if(a[i-1]==b[j-1])dp[i][j]=dp[i-1][j-1]+1;
		else {
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
}
string s="";
while(n>0&&m>0){
	if(a[n-1]==b[m-1]){
		s.push_back(a[n-1]);
		n--;m--;
	}
	else{
		if(dp[n-1][m]>dp[n][m-1]){
			s.push_back(a[n-1]);
			n--;
		}
		else{
			s.push_back(b[m-1]);
			m--;
		}
	}
}
reverse(s.begin(),s.end());
return a.substr(0,n)+b.substr(0,m)+s;
    }
};