class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
                 ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        int ans=0,sum=0,n=cardPoints.size();
        for(int i=0;i<k;i++)sum+=cardPoints[i];
        ans=sum;
        for(int i=0;i<k;i++){
            sum+=cardPoints[n-i-1]-cardPoints[k-i-1];
            ans=max(sum,ans);
        }
        return ans;
    }
};