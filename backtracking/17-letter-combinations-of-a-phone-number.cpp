class Solution {
public:
        void fun(int index,vector<string>&ans,string &store,string &digits,vector<string>&mp){
            if(index==digits.size()){
               if(store.empty()==0) ans.push_back(store);
                
                return;
            }
            for(int i=0;i<mp[digits[index]-'0'].size();i++){
                store.push_back(mp[digits[index]-'0'][i]);
                fun(index+1,ans,store,digits,mp);
                store.pop_back();
            }
        }
    vector<string> letterCombinations(string digits) {
        vector<string>mp(10);
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
        vector<string>ans;
        string s="";
        fun(0,ans,s,digits,mp);
        return ans;
    }
};