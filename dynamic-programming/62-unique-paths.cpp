class Solution {
public:
    int uniquePaths(int m, int n) {
    int ans=1;
    m--,n--;
    if(m<n){swap(m,n);}
    // I can choose m right and n down so basically how many diffrent combinations so like out of m+n moves different ways of m right and n downs
    for(int i=m+1;i<=m+n;i++){
        ans=(ans*1ll*i)/(i-m);
    }
    return ans;
    }
};