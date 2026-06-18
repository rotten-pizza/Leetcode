class Solution {
public:
    string convert(string s, int numRows) {
        std::ios_base::sync_with_stdio(false);
        std::cout.tie(0);

        if(numRows==1)return s;
        vector<string>store(numRows);
        int index=0,down=1;
        for(int i=0;i<s.size();i++){
            store[index].push_back(s[i]);
            if(index==numRows-1){
                down=0;
            }
            if(index==0)down=1;
            if(down){
                index++;
            }
            else {index--;}
        }
        string ans="";
        for(int i=0;i<store.size();i++){
            ans+=store[i];
        }
        return ans;
    }
};