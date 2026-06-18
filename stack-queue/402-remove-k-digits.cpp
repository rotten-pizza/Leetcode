class Solution {
public:
    string removeKdigits(string num, int k) {
        int position_of_zero=-1;
        stack<char>st;
        for(int i=0;i<num.size();i++){
            while(!st.empty()&& int(num[i])<int(st.top())&&k>0){
                k--;
                st.pop();
            }
            st.push(num[i]);
        }
        while(k>0&&!st.empty()){st.pop();k--;}
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        while(ans[0]=='0'){
            ans.erase(ans.begin());
        }
        if(ans.size()==0)return "0";
        return ans;
    }
};