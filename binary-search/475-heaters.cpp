class Solution {
public:
    bool is_possible(vector<int>&houses,vector<int>&heater,int rad){
        int left_most=0;
        for(int i=0;i<heater.size();i++){
            if(heater[i]-rad>houses[left_most])return false;
            else{
                while(left_most<houses.size()&&heater[i]+rad>=houses[left_most])left_most++;
            }
            if(left_most==houses.size())return true;
        }
        return false;
    }
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int max_radius=0;
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        if(heaters[0]>=houses.back())return heaters[0]-houses[0];
        if(houses[0]>=heaters.back())return houses.back()-heaters.back();
        int start=0,end=houses.back();
        while(start<=end){
            int mid=(start+end)>>1;
            if(is_possible(houses,heaters,mid)){
                max_radius=mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return max_radius;
    }
};