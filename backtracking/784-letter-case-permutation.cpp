class Solution {
public:
void solve(string inp,string op,unordered_set<string>&ans){
if(inp.length()==1){
 if(inp[0]>=48 &&inp[0]<58){
        op.push_back(inp[0]);
    ans.insert(op);
        // if(i==inp.size()-1)ans.insert(op);
    }
    else {
        string s=op;
        op.push_back(tolower(inp[0]));
        s.push_back(toupper(inp[0]));
        ans.insert(op);
        ans.insert(s);
    }
    return;
}
for(int i=0;i<inp.size()-1;i++){
    if(inp[i]>=48 &&inp[i]<58){
        op.push_back(inp[i]);
       solve(inp.substr(i+1,inp.size()-i-1),op,ans);
        // if(i==inp.size()-1)ans.insert(op);
    }
    else{
        op.push_back(toupper(inp[i]));
       solve(inp.substr(i+1,inp.size()-i-1),op,ans);
        op.pop_back();
        op.push_back(tolower(inp[i]));
       solve(inp.substr(i+1,inp.size()-i-1),op,ans);
    }
}
}
    vector<string> letterCasePermutation(string s) {
     vector<string>ans;
    unordered_set<string>an;
      solve(s,"",an);
      for(auto &c:an)ans.push_back(c);
        return ans;
    }
};