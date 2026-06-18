class Solution {
public:
long long int give_time_required(vector<int>&v,int rate_of_eating_bananas){
    long long ans=0;
    for(auto &x:v)ans+=x/rate_of_eating_bananas+!(x%rate_of_eating_bananas==0);
    return ans;
}
    int minEatingSpeed(vector<int>& v, int h) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int lowest_rate=1,highest_rate=*max_element(v.begin(),v.end());
int ans=1e9+1;
while(lowest_rate<=highest_rate){
    int mid=lowest_rate+(highest_rate-lowest_rate)/2;
    long long  y=give_time_required(v, mid);
    // cout<<mid<<" "<<y<<endl;
    if(y<=h){ans=mid;highest_rate=mid-1;}
    else{lowest_rate=mid+1;}
}
return ans;
    }
};