class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        set<pair<int,int>>s;
        for(int i=0;i<arr.size();i++){
            s.insert({abs(x-arr[i]),i});
            if(s.size()>k)s.erase(--s.end());
        }
        vector<int>ans;
        for(auto &x:s)ans.push_back(arr[x.second]);
        sort(ans.begin(),ans.end());
        return ans;
    }
};