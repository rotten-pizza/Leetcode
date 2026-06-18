class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
         vector<pair<int,int>>temp;
         int n=arr.size();
    for(int i=0;i<n;i++){
        temp.push_back({arr[i],i});
    }
    sort(temp.begin(), temp.end());
    int rank=1;
    // arr[temp[0].second]=rank;
    for(int i=0;i<temp.size();i++){
        int curval=temp[i].first;
        do{
            arr[temp[i].second]=rank;
        }
        while(++i<n&&temp[i].first==curval);
        i--;
        rank++;
    }
    return arr;
    }
};