class Solution {
public:
    void rotate(vector<int>& arr, int k) {
          int n=arr.size();
       k=k%n;
       k=n-k;
    vector<int>ans;
    for(int i=k;i<n;i++)ans.push_back(arr[i]);
    for(int i=0;i<k;i++)ans.push_back(arr[i]);
 arr=ans;
// k=k%arr.size();
// k=arr.size()-k;
//         reverse(arr.begin(),arr.begin()+k);

//         reverse(arr.begin()+k,arr.end());
    
//         reverse(arr.begin(),arr.end());
    }
};