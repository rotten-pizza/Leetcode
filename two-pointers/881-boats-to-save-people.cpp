class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        ios::sync_with_stdio(0); cin.tie(0);
        sort(people.begin(),people.end());
        int ans=0;
        int weight=0;
        int n=people.size()-1;
        int left=0,right=n;
        while(left<=right){
            if(left==right){ans++;break;}
            if(people[left]+people[right]>limit){
                right--;
                ans++;
            }
            else {ans++;left++,right--;}
        }
        return ans;
    }
};