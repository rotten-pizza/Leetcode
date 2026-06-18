class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //   unordered_map<int,int>mp;
        //   vector<int>ans;
        // for(auto &x:nums)mp[x]++;
        // int n=nums.size();
        // for(auto &[key,value] :mp){
        //     if(value>n/3)ans.push_back(key);
        // }
        // return ans;
        int n=nums.size(), n_3=n/3;
        if (n==1) return nums;
        //There are at most 2 different x such that x>n/3!
        int x0=INT_MIN, x1=INT_MIN;
        int cnt0=0, cnt1=0;

        //Find the most 2 elements, x0 & x1
        for(int &x:nums){
            if (cnt0==0 && x!=x1){
                x0=x, cnt0=1;
            }
            else if (cnt1==0 && x!=x0){
                x1=x, cnt1=1;
            }
            else if(x==x0) cnt0++;
            else if(x==x1) cnt1++;
            else{
                //If x is different from both x0 & x1,
                //decrement their counts.
                cnt0--, cnt1--;
            }
        } 
        vector<int> ans; 

        // Reset counts and check
        cnt0=cnt1=0;

        for (int x: nums){
            if (x==x0) cnt0++;
            else if (x==x1) cnt1++;
        }
        if (cnt0>n_3) ans.push_back(x0);
        if (cnt1>n_3) ans.push_back(x1);
        return ans;
    }
};