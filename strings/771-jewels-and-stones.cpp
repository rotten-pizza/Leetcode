class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int>hash(256,0);
        int ans=0;
        for(int i=0;i<jewels.size();i++){
            hash[jewels[i]]=1;
        }
        for(int i=0;i<stones.size();i++){
            if(hash[stones[i]]==1)ans++;
        }
        return ans;
    }
};