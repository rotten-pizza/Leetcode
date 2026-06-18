class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int map[128]={0};
        int left=0,right=0,count=0;
        while(right<s.size()){
            map[s[right]]++;
            if(map[s[right]]==2)count++;
            if(count>=1){
                map[s[left]]--;
                if(map[s[left]]==1)count--;
                left++;
            }
            if(count==0)ans=max(right-left+1,ans);
            right++;
        }
        return ans;
    }
};