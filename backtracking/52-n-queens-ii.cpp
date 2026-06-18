class Solution {
public:

    bool issafe(int &x, int &y, vector<string>&store) {
        int n = store.size();
        //attack all like hathi
        for(int i=0;i<x;i++){
            if(store[i][y]=='Q')return false;
        }
        //x decreases
        for(int i=1;i<n;i++){
            if(x-i>=0&&y+i<n){if(store[x-i][y+i]=='Q')return false;}
            else break;
        }
        //both decrease
        for(int i=1;i<n;i++){
            if(x-i>=0&&y-i>=0){if(store[x-i][y-i]=='Q')return false;}
            else break;
        }
        return true;
    }
    void solve(int index, int & ans, vector<string>& store,
                int n) {
        if (index == n) {
            ans++;
            return;
        }
        for (int i = 0; i < n; i++) {
            if (issafe(index,i,store)) {
                store[index][i] = 'Q';
                // attack_update(index, i, number_of_attackers, true);
                solve(index + 1, ans, store, n);
                store[index][i] = '.';
                // attack_update(index, i, number_of_attackers, false);
            }
        }
    }
    int totalNQueens(int n) {
         vector<string> store;
         int ans=0;
        string s = "";
        for (int j = 0; j < n; j++)
            s.push_back('.');
        for (int i = 0; i < n; i++)
            store.push_back(s);
        solve(0, ans, store, n);
        return ans;
    }
};