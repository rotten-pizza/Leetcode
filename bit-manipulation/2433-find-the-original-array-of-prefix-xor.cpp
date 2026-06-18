class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        ios::sync_with_stdio(0);
        int prev=pref[0],store;
        // ans.push_back(pref[0]);
        for(int i=1;i<pref.size();i++){
            store=pref[i];
            pref[i]=pref[i]^prev;
            prev=store;
        }
        return pref;
    }
};