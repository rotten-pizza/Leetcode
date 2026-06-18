class Solution {
public:
    int maxDepth(string s) {
        int left=0,ans=0;
        for(auto &x:s){
            if(x=='(')left++;
            if(x==')')left--;
            ans=max(ans,left);
        }
        return ans;
    }
};