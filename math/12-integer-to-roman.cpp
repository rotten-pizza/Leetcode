class Solution {
public:
    void add(int n,string &s,string str){
        for(int i=0;i<n;i++)s+=str;
    }
    string intToRoman(int num) {
        string s="";
        vector<pair<int,string>>mp;
        mp.push_back({1000,"M"});
        mp.push_back({900,"CM"});
        mp.push_back({500,"D"});
        mp.push_back({400,"CD"});
        mp.push_back({100,"C"});
        mp.push_back({90,"XC"});
        mp.push_back({50,"L"});
        mp.push_back({40,"XL"});
        mp.push_back({10,"X"});
        mp.push_back({9,"IX"});
        mp.push_back({5,"V"});
        mp.push_back({4,"IV"});
        mp.push_back({1,"I"});
        for(int i=0;i<mp.size();i++){
            int number=mp[i].first;
            string str=mp[i].second;
            int x=num/number;
            // if(x==0)return s;
            add(x,s,str);
            num-=(x)*number;
        }
        return s;
    }
};