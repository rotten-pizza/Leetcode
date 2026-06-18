class Solution {
public:
    void fun(int index,vector<vector<int>>&ans,vector<int>&store,int target,int k){
        if(target==0&& store.size()==k){
            ans.push_back(store);
        }
        if(target==0||store.size()==k){
            return;
        }
        for(int i=index;i<10;i++){
            if(i>target){break;}
            store.push_back(i);
            fun(i+1,ans,store,target-i,k);
            store.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>store;
        fun(1,ans,store,n,k);
        return ans;
    }
};