class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int score_ans=0,ans=1e9;
            for(int j=0;j<divisors.size();j++){
            int score=0;
        for(int i=0;i<nums.size();i++){
                if(nums[i]%divisors[j]==0)score++;
            }
            if(score>score_ans){ans=divisors[j];score_ans=score;}
            else if(score==score_ans){ans=min(ans,divisors[j]);}
        }
        return ans;
    }
};