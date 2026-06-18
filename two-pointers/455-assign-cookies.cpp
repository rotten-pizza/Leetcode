class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int index1=0,index2=0;
        while(index1<g.size()&&index2<s.size()){
            if(g[index1]<=s[index2]){ans++;
            index1++,index2++;}
            else index2++;
        }
        return ans;
    }
};