class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int index1=0,index2=nums.size()-1;
        int flag=1;
        while(index1<=index2){
            if(flag){
                ans.push_back(nums[index2]);
                flag=0;
                index2--;
            }
            else{
                ans.push_back(nums[index1]);
                index1++;
                flag=1;
            }
        }
        return ans;
    }
};