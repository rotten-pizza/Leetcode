class Solution {
public:
void fun(int nopen,int nclose,vector<string>&ans,string &store){
if(nopen==0&&nclose==0){
    ans.push_back(store);
    return;
}
if(nopen>0){
    store.push_back('(');
    fun(nopen-1,nclose,ans,store);
    store.pop_back();
}
 if(nopen<nclose){
    store.push_back(')');
    fun(nopen,nclose-1,ans,store);
        store.pop_back();
}
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        fun(n,n,ans,s);
        return ans;
    }
};