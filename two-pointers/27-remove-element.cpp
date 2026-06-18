class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int right=nums.size()-1;

        for(int i=0;i<=right;i++){
            while(right>=0&&nums[right]==val){right--;}
            if(i<right&&nums[i]==val){
                swap(nums[i],nums[right]);
            }
        }
        return right+1;
    }
};