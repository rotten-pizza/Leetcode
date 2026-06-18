class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        int ind1=m-1,ind2=n-1,index=m+n-1;
        while(ind1>=0&&ind2>=0&&index>=0){
            if(nums1[ind1]>nums2[ind2]){
                swap(nums1[ind1],nums1[index]);
                ind1--;
            }
            else {
                swap(nums2[ind2],nums1[index]);
                ind2--;
            }
            index--;
        }
        while(ind2>=0){
            nums1[ind2]=nums2[ind2];
            ind2--;
        }
        
    }
};