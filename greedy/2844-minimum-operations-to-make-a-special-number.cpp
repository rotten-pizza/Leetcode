class Solution {
public:
int by_0(string num){
        if(num.size()==1)return num.back()!='0';
    int n=num.size();
    int ans=0,flag=0;
    while(num.size()>0&&num.back()!='0'){num.pop_back(),ans++;};
    if(num.size()>0&&num.back()=='0')flag=1;
    if(num.size()>0)num.pop_back();
    for(int index=num.size()-1;index>=0;index--){
        if(num[index]=='0'||num[index]=='5')return ans;
        else ans++;
    }
    if(flag)return n-1;
    return n;
}
int by_5(string num){
    if(num.size()==1)return num.back()!='0';
    int n=num.size();
    int ans=0;
    while(num.size()>0&&num.back()!='5'){num.pop_back(),ans++;};
    if(num.size()>0)num.pop_back();
    for(int index=num.size()-1;index>=0;index--){
        if(num[index]=='2'||num[index]=='7')return ans;
        else ans++;
    }
    return n;
}
    int minimumOperations(string num) {
       return min (by_0(num),by_5(num));
    }
};