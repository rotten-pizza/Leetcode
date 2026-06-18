class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flip=0;
        for(int i=0;i<31;i++){
            bool q=a&(1<<i),w=b&(1<<i),e=c&(1<<i);
            if(q && w && !e)flip+=2;
            else if((q||w) &&(!e))flip++;
            else if(!q && !w &&(e))flip++;
            }
            return flip;
    }
};