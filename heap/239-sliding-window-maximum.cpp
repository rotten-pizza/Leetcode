class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
         std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        deque<int>q;
        int n=arr.size();
        vector<int>ans;
   for(int i=0;i<k;i++){
       while(!q.empty() && arr[q.back()]<arr[i]){q.pop_back();}
       q.push_back(i);
   }
ans.push_back(arr[q.front()]);
    for(int i=k;i<n;i++ ){
        if(q.front()==i-k)q.pop_front();
        while(!q.empty() && arr[q.back()]<arr[i]){q.pop_back();}
        q.push_back(i);
        ans.push_back(arr[q.front()]);
    }
    return ans;
    }
};