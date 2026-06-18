class Solution {
public:
    int minimumLength(string s) {
        int left=0,right=s.size()-1;
        while(left<right&&s[left]==s[right]){
            char x=s[left];
            while(left<=right&&s[left]==x){left++;}
            while(right>=left&&s[right]==x)right--;
        }
        if(left>right)return 0;
        return right-left+1;
    }
};