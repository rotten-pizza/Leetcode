class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        vector<int>ans;
        int carry=0,index=nums.size()-1;
        while(carry!=0||index>=0||k>0){
            int sum=carry;
            if(index>=0){sum+=nums[index];index--;}
            if(k>0){sum+=k%10;k/=10;}
            ans.push_back(sum%10);
            carry=sum/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};