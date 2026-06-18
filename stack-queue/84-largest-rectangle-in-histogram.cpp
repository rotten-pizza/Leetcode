#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:

    int largestRectangleArea(vector<int>& heights) {

         int n=heights.size();
   stack<int>st;
   stack<int>st1;
   vector<int>minimum_on_left(n,-1);
   vector<int>minimum_on_right(n,n);
   for(int i=n-1;i>=0;i--){
     while(!st.empty()&&heights[st.top()]>=heights[i]){
       st.pop();
     }
     if(!st.empty())minimum_on_right[i]=st.top();
     st.push(i);

      while(!st1.empty()&&heights[st1.top()]>=heights[n-1-i]){
       st1.pop();
     }
     if(!st1.empty())minimum_on_left[n-1-i]=st1.top();
     st1.push(n-1-i);
   }
   int ans=0;
   for(int i=0;i<n;i++){
     //use full height
     int h1=(heights[i])*(-minimum_on_left[i]+minimum_on_right[i]-1);
     ans=max(h1,ans);
   }
   return ans;
    }
};
auto init = []() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  return '$';
}();