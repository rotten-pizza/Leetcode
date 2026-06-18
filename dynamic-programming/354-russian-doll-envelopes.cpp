class Solution {
public:
     bool comp( vector<int> a, vector<int> b){
        if(a[0] != b[0]) return a[0] < b[0];
            return a[1] > b[1];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(), [](const auto& a, const auto& b){
            if(a[0] != b[0]) return a[0] < b[0];
            return a[1] > b[1];
        });

        vector<int>tail;
        for(int i=0;i<envelopes.size();i++){
            auto x=envelopes[i];
            int y=x[1];
            auto z=lower_bound(tail.begin(),tail.end(),y);
            if(z==tail.end()){
                tail.push_back(y);
            }
            else{
                *z=y;
            }
            // while(i<envelopes.size()-1&&envelopes[i+1][0]==x[0]){
            //     i++;
            // }
        }
        return tail.size();
    }
};