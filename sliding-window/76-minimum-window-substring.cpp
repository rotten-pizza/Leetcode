class Solution {
public:
    string minWindow(string s, string t) {
       vector<int>map(256,0);
        int distinct_char=0,count0=0;
        for(auto x:t)map[x]++;
        for(auto x:map)if(x!=0)distinct_char++;
        int left=0,right=0,ans=1e9,ans_start=-1;
        while(right<s.size()){
            map[s[right]]--;
            if(map[s[right]]==0)count0++;
            while(count0==distinct_char){
                if(ans>right-left+1){ans_start=left;ans=right-left+1;}
                map[s[left]]++;
                if(map[s[left]]==1)count0--;
                   left++;
            }
            right++;
        }
        if(ans_start==-1)return "";
        return s.substr(ans_start,ans);
    }
};