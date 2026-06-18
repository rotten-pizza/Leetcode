class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        int max_ele=*max_element(nums.begin(),nums.end());
        int min_ele=*min_element(nums.begin(),nums.end());
        vector<int>freq(20001,0);
        for(int i=0;i<nums.size();i++)freq[nums[i]+10000]++;
        set<pair<int,int>>store;
        for(int i=min_ele+10000;i<max_ele+10001;i++){
          if(freq[i]>0)  {store.insert({freq[i],i-10000});
          if(store.size()>k)store.erase(store.begin());
          }
        }
        vector<int>ans;
        for(auto &x:store)ans.push_back(x.second);
        return ans;
    }
};