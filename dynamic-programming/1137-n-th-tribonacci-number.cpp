class Solution {
public:
    int tribonacci(int n) {
        vector<int>a(3,0);
        a[0]=0;
        a[1]=1;
        a[2]=1;
        if(n<=2)return a[n];
        for(int i=0;i<=n-3;i++){
            int x=a[0]+a[1]+a[2];
            a[0]=a[1];
            a[1]=a[2];
            a[2]=x;
        }
        return a[2];
    }
};