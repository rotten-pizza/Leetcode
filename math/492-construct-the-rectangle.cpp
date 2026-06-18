class Solution {
public:
    vector<int> constructRectangle(int area) {
        int x=1;
        for(int i=sqrt(area);i>=2;i--){
            if(area%i==0)return {area/i,i};
        }
        return {area,1};
    }
};