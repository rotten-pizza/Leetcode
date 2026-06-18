class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int>digits;
        int x=n;
        while(x>0){
            digits.push_back(x%10);
            x/=10;
        }
        reverse(digits.begin(),digits.end());
        int break_index=-1;
        for(int i=digits.size()-1;i>0;i--){
            if(digits[i]>digits[i-1]){
                break_index=i-1;
                break;
            }
        }
        // cout<<break_index;
        if(break_index==-1)return -1;
    for(int i=digits.size()-1;i>=0;i--){
        if(digits[i]>digits[break_index]){
            swap(digits[i],digits[break_index]);
            break;
        }
    }
    reverse(digits.begin()+break_index+1,digits.end());
    int ans=0;
    for(int i=0;i<digits.size();i++){
        if(ans>(INT_MAX-digits[i])/10)return -1;
        ans=ans*10+digits[i];
    }
    return ans;
    }
};