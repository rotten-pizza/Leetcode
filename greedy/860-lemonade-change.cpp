class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int>change(2,0);
        for(int i=0;i<bills.size();i++){
            if(bills[i]==10){
                change[0]--;
                change[1]++;
            }
            else if(bills[i]==20){
                change[0]--;
            if(change[1]==0){
                change[0]-=2;
            }
            else change[1]--;
            }
            else change[0]++;
            if(change[0]<0||change[1]<0)return false;
        }
        return true;
    }
};
        vector<int>change(2,0);
        for(int i=0;i<bills.size();i++){
            if(bills[i]==10){
                change[0]--;
                change[1]++;
            }
            else if(bills[i]==20){
                change[0]--;
            if(change[1]==0){
                change[0]-=2;
            }
            else change[1]--;
            }
            else change[0]++;
            if(change[0]<0||change[1]<0)return false;
        }
        return true;
    }
};