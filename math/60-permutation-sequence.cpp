class Solution {
public:
        
    string getPermutation(int n, int k) {
        string s;
        k--;
        int factorial=1;
        for(int i=1;i<n;i++)factorial=factorial*i;
        for(int i=0;i<n;i++)s.push_back(i+'1');
        n--;
        int index=0;
          while(k!=0){
            int i=k/factorial;
            swap(s[index],s[index+i]);
            sort(s.begin()+index+1,s.begin()+index+i+1);
             k=k%factorial;
             factorial/=n;
            index++,n--;
          }
    return s;
    
    }
};