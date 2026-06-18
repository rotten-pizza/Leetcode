class Solution {
public:
    void solve(int ind,string &s,unordered_set<string>&store){
        int n=s.size();
        if(ind==n)return;
        for(int i=ind;i<n;i++){
                swap(s[i],s[ind]);
            solve(ind+1,s,store);
            store.insert(s);
            swap(s[i],s[ind]);
        }
    }
    int numTilePossibilities(string tiles) {
         std::ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    cout.tie(nullptr); 
        unordered_set<string>store;
        solve(0,tiles,store);
        unordered_set<string>ans;
        for(auto x:store){
            for(int i=0;i<tiles.size();i++){
                ans.insert(x.substr(0,i+1));
            }
        }
        return ans.size();
        
    }
};