class Solution {
public:
 void fun(int target,int index,vector<vector<int>>&ans,vector<int>&store,vector<int>&cand){
        if(target==0){
            // sort(store.begin(),store.end());
            ans.push_back(store);
            return;
            }
        int last_picked=-1;
        for(int i=index;i<cand.size();i++){
            if(cand[i]>target)break;
            //possible
            if(last_picked==-1||cand[last_picked]!=cand[i]){
                last_picked=i;
                    store.push_back(cand[i]);
                    fun(target-cand[i],i+1,ans,store,cand);
                    store.pop_back();
            }
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& a, int target) {
        vector<vector<int>>ans;
        vector<int>store;
        sort(a.begin(),a.end());
        fun(target,0,ans,store,a);
        return ans;
    }
};