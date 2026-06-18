class Solution {
public:
    int days_taken(vector<int>&weights,int max_load){
        int days=1,capacity_till_now=weights[0];
        for(int i=1;i<weights.size();i++){
            capacity_till_now+=weights[i];
            if(capacity_till_now>max_load){
                days++;
                capacity_till_now=weights[i];
            }
        }
return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int start=*max_element(weights.begin(),weights.end()),end=accumulate(weights.begin(),weights.end(),0),ans;
    while(start<=end){
        int  mid=start+(end-start)/2;
        int days_required=days_taken(weights,mid);
        if(days_required<=days){
            ans=mid;
            end=mid-1;
        }
        else start=mid+1;
    }
    return ans;
    }
};