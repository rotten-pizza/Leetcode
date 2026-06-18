class Solution {
public:
    int mySqrt(int x) {
        int start=0,end=min(1<<16,x),mid;
        while(start<=end){
             mid=start+(end-start)/2;
            if(mid*1ll*mid==x){
                    return mid;
            }
            else if(mid*1ll*mid<x){
                start=mid+1;
            }
            else end=mid-1;
        }
        return end;
    }
};