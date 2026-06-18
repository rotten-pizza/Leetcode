class NumArray {
public:
    vector<int>presum;
    
    NumArray(vector<int>& nums) {
        presum.push_back(0);
        for(int i=0;i<nums.size();i++){
            presum.push_back(nums[i]+presum.back());
        }
    }
    
    void update(int index, int val) {
        int to_sub=val-presum[index+1]+presum[index];
        for(int i=index+1;i<presum.size();i++){
            presum[i]+=to_sub;
        }
    }
    
    int sumRange(int left, int right) {
        return presum[right+1]-presum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */