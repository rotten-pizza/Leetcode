class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(0);
        unordered_map<string,vector<string>>hash;
        string x;
        for(int i=0;i<strs.size();i++){
             x=strs[i];
            sort(x.begin(),x.end());
            hash[x].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        // int i=0;
        for(auto &it:hash){    
            ans.push_back(it.second);
            // i++;
        }
        return ans;
    }
};