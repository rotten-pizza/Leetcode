class Solution {
public:
    int pivotInteger(int n) {
        int sum=n*(n+1)/2;
        int x=sqrt(sum);
    return sum==x*x?x:-1;
    }
};