class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        if(nums.size()==0)return ans;
        int flag=0;
        string store="";
        for(int i=0;i<nums.size()-1;i++){
            if(flag==0){
                store+=to_string(nums[i]);
                if(nums[i]+1!=nums[i+1]){
                    ans.push_back(store);
                    store="";
                    flag=0;
                }
                else flag=1;
            }
            else if(nums[i]+1!=nums[i+1]){
                store+="->"+to_string(nums[i]);
                ans.push_back(store);
                store="";
                flag=0;
            }
        }
        if(flag==0){
            ans.push_back(to_string(nums.back()));
        }
        else {store+="->"+to_string(nums.back());
        ans.push_back(store);}
        return ans;
    }
};