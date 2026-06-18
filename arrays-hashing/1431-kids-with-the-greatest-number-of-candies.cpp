class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int max=*max_element(candies.begin(),candies.end());
        for(auto x:candies)ans.push_back(x+extraCandies>=max);
        return ans;

        
    }
};