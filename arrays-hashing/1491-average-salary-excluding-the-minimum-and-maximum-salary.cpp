class Solution {
public:
    double average(vector<int>& salary) {
        int mini=1e9,maxi=0;
        double sum=0;
        for(int i=0;i<salary.size();i++){
            sum+=salary[i];
            mini=min(mini,salary[i]);
            maxi=max(maxi,salary[i]);
        }
return (sum-mini-maxi)/(salary.size()-2);
    }
};