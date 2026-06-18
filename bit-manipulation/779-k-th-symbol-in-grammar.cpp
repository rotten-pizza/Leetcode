class Solution {
public:
 
    int kthGrammar(int n, int k) {
   if(n==1)return 0;
   int prk=(k+1)/2;
   int previousk=kthGrammar(n-1,prk);
   if(previousk==0){
       if(k%2==0)return 1;
       else return 0;
   }
   else {
         if(k%2==0)return 0;
       else return 1;
   }
    }
};