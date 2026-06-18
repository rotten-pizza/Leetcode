class Solution {
public:
    void fun(int target,int index,vector<vector<int>>&ans,vector<int>&store,vector<int>&cand){
        if(target==0){ans.push_back(store);return;}
        if(target<0||index==cand.size())return;
        // take the element
        fun(target,index+1,ans,store,cand);
        store.push_back(cand[index]);
        fun(target-cand[index],index,ans,store,cand);
        store.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>store;
        fun(target,0,ans,store,candidates);
        return ans;
    }
};