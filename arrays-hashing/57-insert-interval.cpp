class Solution {
public:


    vector<vector<int>> insert(vector<vector<int>>& inter, vector<int>& new_inter) {
        cin.tie(nullptr);
	cout.tie(nullptr);

        vector<vector<int>> arr;
        bool not_pushed=true;
        for(int i=0;i<inter.size();i++){
            if(inter[i][1]<new_inter[0]){
                arr.push_back(inter[i]);
            }
            else if(inter[i][1]>=new_inter[0]&&inter[i][0]<=new_inter[1]){
                    new_inter[0]=min(new_inter[0],inter[i][0]);
                    new_inter[1]=max(new_inter[1],inter[i][1]);
            }
            else if(not_pushed==false){
                arr.push_back(inter[i]);
            }
            else if(inter[i][0]>new_inter[1]){
                arr.push_back(new_inter);
                not_pushed=false;
                arr.push_back(inter[i]);
            }
        }
    if(not_pushed==true)arr.push_back(new_inter);
        return arr;
    }
};