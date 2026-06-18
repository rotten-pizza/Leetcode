class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n<=1)return n;
        vector<int>ans(n+1,0);
        ans[0]=0;
        ans[1]=1;
        for(int i=1;i<=n/2;i++){
          if(2*i<=n)ans[2*i]=ans[i];
          if(2*i+1<=n) ans[2*i+1]=ans[i]+ans[i+1];
        }
        return *max_element(ans.begin(),ans.end());
    }
};