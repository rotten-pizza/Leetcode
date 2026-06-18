class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // string prefix="";
        //   std::ios_base::sync_with_stdio(0);
        // cin.tie(0);
        int length=1e8,k;
        for(int i=0;i<strs.size();i++){
            if(length>strs[i].size()){
                length=strs[i].size();
                k=i;
            };
        }
        for(int i=0;i<length;i++){
            char to_check=strs[0][i];
            for( int j=0;j<strs.size();j++){
                if(strs[j][i]!=to_check)return strs[0].substr(0,i);
            }
        }
        return strs[k];
    }
};