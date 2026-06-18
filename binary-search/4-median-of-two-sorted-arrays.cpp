#include<bits/stdc++.h>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
 ios_base::sync_with_stdio(0);
        // cin.tie(0);
        int n1=a.size(),n2=b.size();
        if(a.size()>b.size())return findMedianSortedArrays(b,a);
        if(n1==0){
            return (n2%2==0)? (b[n2/2]+b[n2/2-1])/2.0:b[n2/2];
        }

    int n=n1+n2;
	 int start=0,end=n1;
	while(start<=end){
		 int cut_on_1=(end+start)>>1;
		 int cut_on_2=(n1+n2+1)/2-cut_on_1;
		int left_1=-1e9,left_2=-1e9;
		 int right_1=1e9,right_2=1e9;
		if(cut_on_1<n1)right_1=a[cut_on_1];
		if(cut_on_2<n2)right_2=b[cut_on_2];
		if(cut_on_1>0)left_1=a[cut_on_1-1];
		if(cut_on_2>0)left_2=b[cut_on_2-1];
		if((left_1<=right_2)&& (left_2<=right_1)){
			if(n%2==1){
				return max(left_1,left_2);
			}
			else return (max(left_1,left_2)+min(right_1,right_2))/2.0;
		}
		else if(left_1>right_2){end=cut_on_1-1;}
		else {start=cut_on_1+1;}
	}
	return 0;
    }
};