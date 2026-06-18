class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int>store(256,0);
        for(auto x:p)store[x]++;
        int distinct_char=0;
        for(int x:store)if(x>0)distinct_char++;
        int count_0=0;
    int left=0,right=0;
    while(right<s.size()){
        store[s[right]]--;
        if(store[s[right]]==0)count_0++;
        else if(store[s[right]]==-1)count_0--;
        // if(count_0==distinct_char)ans.push_back(left);
        while(p.size()<right-left+1){
            store[s[left]]++;
            if(store[s[left]]==0)count_0++;
            else if(store[s[left]]==1)count_0--;
            left++;
        }
        if(count_0==distinct_char)ans.push_back(left);
        right++;
    }
    return ans;
    }
};