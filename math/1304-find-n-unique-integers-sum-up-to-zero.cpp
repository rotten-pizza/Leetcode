class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        if(n%2==1)ans.push_back(0);
        n=(n/2)*2;
        int num=1;
        for(int i=0;i<n;i++){
            if(i%2==0)ans.push_back(num);
            else {ans.push_back(-num);
            num++;};

        }
        return ans;
    }
};