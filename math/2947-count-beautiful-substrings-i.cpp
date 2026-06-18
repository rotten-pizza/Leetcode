class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int ans=0,n=s.size();
            // vector<int>prevow(s.size()+1,0);
            int prevow[n+1];
            int precons[n+1];

            // vector<int>precons(s.size()+1,0);
            for(int i=0;i<n;i++){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    prevow[i+1]=prevow[i]+1;
                    precons[i+1]=precons[i];
                }
                else {
                    prevow[i+1]=prevow[i];
                    precons[i+1]=precons[i]+1;
                }
            }
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(prevow[j+1]-prevow[i]==precons[j+1]-precons[i]){
                        ans+=((prevow[j+1]-prevow[i])*(precons[j+1]-precons[i]))%k==0;
                    }
                }
            }
            return ans;
    }
};