class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        ios_base::sync_with_stdio(false);
         cin.tie(NULL);
        vector<vector<int>>ans;
        priority_queue<pair<int,int>>max_heap;
        int i=0;
        for(auto &it:points){
            max_heap.push({it[0]*it[0]+it[1]*it[1],i});
            i++;
            if(max_heap.size()>k)max_heap.pop();
        }
        while(k--){ans.push_back(points[max_heap.top().second]);max_heap.pop();}
        return ans;
    }
};