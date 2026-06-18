class Solution {
public:
    int beautySum(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int ans = 0;
        int mp[26]={0};
        for (int i = 0; i < s.size(); i++) {
            memset(mp, 0, sizeof(mp));
            for (int j = i; j < s.size(); j++) {
                mp[s[j] - 'a']++;
                int maxi = 0, mini = 501;
                for (int i = 0; i < 26; i++) {
                    if (mp[i] > 0) {
                        mini = min(mini, mp[i]);
                        maxi = max(maxi, mp[i]);
                    }
                }
                ans += maxi-mini;
            }
        }
        return ans;
    }
};