class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>m;
        for(auto i:nums)m.insert(i);
        int j=0;
        for(auto c:m)nums[j++]=c;
        return m.size();
    }
};