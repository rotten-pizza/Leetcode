class Solution {
public:
    int quick_select(vector<int>& nums, int k){
        mt19937_64 rd(time(0)); // C++ mt19937_64 pseudo random
        int pivot=nums[rd()%nums.size()];
        vector<int> L, R;//L={x|x>pivot} R={x|x<pivot} 
        int msize=0;
        for(int x:nums){//Divide into 3 parts
            if (x>pivot) L.push_back(x);
            else if (x<pivot) R.push_back(x);
            else msize++;
        }
        if (k<=L.size()) return quick_select(L, k); //select from L
        int lm=L.size()+msize;
        if (lm<k) return quick_select(R, k-lm);// select from R
        return pivot; // select from M
    }

    int findKthLargest(vector<int>& nums, int k) {
        return quick_select(nums, k);
    }
};