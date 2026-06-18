class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n=arr.size();
        set<pair<double,pair<int,int>>>store;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                store.insert({double(arr[i])/double(arr[j]),{i,j}});
                if(store.size()>k)store.erase(--store.end());
            }
        }
        return {arr[(*store.rbegin()).second.first],arr[(*store.rbegin()).second.second]};
    }
};