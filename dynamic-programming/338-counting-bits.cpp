class Solution {
public:
    vector<int> countBits(int n) {
       vector<int>ans(n+1);
      for(int x=0;x<n+1;x++){
          int count=0,j=x; 
          while(j>0){
    count++;
    j=j&(j-1);
}
  ans[x]=count;    }
  return ans;
  }
};