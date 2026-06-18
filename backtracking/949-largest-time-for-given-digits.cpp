class Solution {
public:
    bool is_valid(string s){
        if(stoi(s.substr(0,2))<24&&stoi(s.substr(2,2))<60)return true;
        return false;
    }
   void generate(int index,string &store,string &ans){
       if(index==store.size()){
           if(is_valid(store)&& store>ans)ans=store;
           return;
       }
       for(int i=index;i<store.size();i++){
           swap(store[index],store[i]);
           generate(index+1,store,ans);
                       swap(store[i],store[index]);
       }
   }
    string largestTimeFromDigits(vector<int>& arr) {
        string s="";
        string ans="";
        s.push_back(arr[0]+'0');
        s.push_back(arr[1]+'0');
                    s.push_back(arr[2]+'0');
                    s.push_back(arr[3]+'0');
        generate(0,s,ans);
                    if(ans=="")return ans;
                    ans=ans.substr(0,2)+":"+ans.substr(2,2);
                    return ans;
    }
};