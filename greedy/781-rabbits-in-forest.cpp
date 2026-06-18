class Solution {
public:
    int numRabbits(vector<int>& answers) {
        // number of rabbits with same color, how many
        unordered_map<int,int>mp;
        for(int i=0;i<answers.size();i++){
            mp[answers[i]]++;
        }
        int sol=0;
        for(auto it:mp){
            int divi=it.first+1;
            sol+=it.second/divi*divi+divi*(it.second%divi!=0);
        }
        return sol;
    }
};