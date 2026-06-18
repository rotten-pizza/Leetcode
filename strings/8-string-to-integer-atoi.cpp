class Solution {
public:
    int myAtoi(string s) {
        if(s.size()==0)return 0;
       int sign=1;
        int start_index=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                continue;
            }
            else if(s[i]-'0'>=0&&s[i]-'0'<10){
                start_index=i;
                break;
            }
            else if(s[i]=='-'){
                sign=0;
                start_index=i+1;
                break;
            }
            else if(s[i]=='+'){
                sign=1;
                start_index=i+1;
                break;
            }
            else {
                return 0;
            };
            ;
        }
        if(start_index==-1&& (s[0]-'0'<0||s[0]-'0'>10))return 0;
        int last_index=s.size()-1;
        for(int i=start_index;i<s.size();i++){
            if(s[i]-'0'<0||s[i]-'0'>10){
                last_index=i-1;
                break;
            }
        }
        long long ans=0;
        // long long x=1;
        while(s[start_index]=='0'){
            start_index++;
        }
        int counter=0;
        for(int i=start_index;i<=last_index&&counter<12;i++){
            ans*=10;
            ans+=(s[i]-'0');
            counter++;
        }
        if(sign==0)ans=-ans;
        if(sign==1&&ans>INT_MAX)ans=INT_MAX;
        if(sign==0&&ans<INT_MIN)ans=INT_MIN;
        return int(ans);
    }
};