class Solution {
public:

    bool hasGroupsSizeX(vector<int>& deck) {
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       unordered_map<int,int>mp;
        for(int i=0;i<deck.size();i++){
            mp[deck[i]]++;
        }
        // vector<int>store;
        // for(auto &it:mp)store.push_back(it.second);
       int gcd = 0;
        for(auto &it : mp){
            gcd = __gcd(gcd,it.second);
            if(gcd==1){
                return false;
            }
        }

        return gcd>=2;
    }
};