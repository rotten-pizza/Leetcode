class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=prices.size(),ans=0;
        int max_on_right=prices[n-1];
        for(int i=n-2;i>=0;i--){

            if(prices[i]>max_on_right){
                max_on_right=prices[i];
            }
            else ans=max(ans,max_on_right-prices[i]);
        }
        return ans;
    }
};