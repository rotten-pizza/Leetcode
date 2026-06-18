class Solution {
public:
    int ladderLength(string start, string end, vector<string>& wordList) {
        unordered_set<string> hash(wordList.begin(),wordList.end());
        if (hash.find(end) == hash.end())
            return 0;
        int x = -1;
        int n=start.size();
        queue<string> q;
        hash.insert(start);
        swap(start,end);
        if(hash.find(start)!=hash.end())hash.erase(start);
        q.push(start);
        int level = 0;
        while (!q.empty()) {
            int len = q.size();
            level++;
            string s;
            for (int k = 0; k < len; k++) {
                 s = q.front();
                q.pop();
                for (int i = 0; i < n; i++) {
                    char x = s[i];
                    for (int j = 0; j <26; j++) {
                        if (j+'a' == x)
                            continue;
                        s[i] = j+'a';
                        if (s == end)
                            return level+1;
                        if (hash.find(s) != hash.end()) {
                            q.push(s);
                            hash.erase(s);
                        }
                        s[i] = x;
                    }
                }
            }
        }
        return 0;
    }
};