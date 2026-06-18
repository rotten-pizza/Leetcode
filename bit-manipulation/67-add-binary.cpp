class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size()<b.size())swap(a,b);
        int carry=0;
        for(int i=b.size()-1;i>=0;i--){
            int sum=a[a.size()-1-(b.size()-1-i)]+b[i]-'0'-'0'+carry;
            carry=sum/2;
            a[a.size()-1-(b.size()-1-i)]=sum%2+'0';
        }
        int index=a.size()-b.size()-1;
        while(carry==1&&index>=0){
            int sum=a[index]-'0'+carry;
            carry=sum/2;
            a[index]=sum%2+'0';
            index--;
        }
        if(carry==1)a.insert(a.begin(),'1');
        return a;
    }
};