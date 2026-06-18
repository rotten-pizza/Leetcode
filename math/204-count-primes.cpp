class Solution {
public:

    int countPrimes(int n) {
    vector<bool>seive(n,true);
    
        int count=0;
        for(int i=2;i<n;i++){
        if(seive[i]){
                count++;
            for(int j=2*i;j<n;j=j+i)seive[j]=false;
        }
        }
        return count;
    }
};