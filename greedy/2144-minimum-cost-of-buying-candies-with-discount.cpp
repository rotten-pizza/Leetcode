class Solution {
public:
    int minimumCost(vector<int>& cost) {
       sort(cost.begin(),cost.end());
       int ans=0,n=cost.size();
       for(int i=0;i<cost.size();i++){
        if((i+1)%3==0)continue;
        else ans+=cost[n-1-i];
       } 
       return ans;
    }
};