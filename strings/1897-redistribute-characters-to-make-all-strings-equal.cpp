class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int>frequency(26,0);
        for(auto x:words){
            for(auto y:x)frequency[y-'a']++;
        }
        for(auto x:frequency)if(x%words.size()!=0)return false;
        return true;
    }
};