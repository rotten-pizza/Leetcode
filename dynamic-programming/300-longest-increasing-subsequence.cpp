class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>tail;
        for(int x:nums){
            auto y=lower_bound(tail.begin(),tail.end(),x);
            if(y==tail.end()){
                tail.push_back(x);
            }
            else {
                *y=x;
            }
        }
        return tail.size();
    }
};