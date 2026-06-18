class Solution {
public:

    string longestDiverseString(int a, int b, int c) {
        string ans="";
        while(a>0||b>0||c>0){
        if(ans.size()<2||ans.back()!=ans[ans.size()-2]){
            if(a>b){
                if(a>c){ans.push_back('a');a--;}
                else{ans.push_back('c');c--;}
            }
            else {
                if(b>c){ans.push_back('b');b--;}
                else{ans.push_back('c');c--;}
            }
        }
        else{
            char last=ans.back();
            if(ans.back()=='a'){
                if(b==0&&c==0)break;
                if(b>c){ans.push_back('b');b--;}
                else {ans.push_back('c');c--;}
            }
            else if(ans.back()=='b'){
                if(a==0&&c==0)break;
                if(a>c){ans.push_back('a');a--;}
                else{ans.push_back('c');c--;}
            }
            else{
                  if(b==0&&a==0)break;
                if(a>b){ans.push_back('a');a--;}
                else{ans.push_back('b');b--;}
            }
        }

        }
       return ans; 
    }
};