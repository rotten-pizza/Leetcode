class Solution {
public:
    bool find(string s){
        if(s[0]=='+'||s[1]=='+')return true;
        return 0;
    }
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0,increment=0;
        for(auto y:operations){if(find(y))x++;else x--;}
        return x;
    }
};