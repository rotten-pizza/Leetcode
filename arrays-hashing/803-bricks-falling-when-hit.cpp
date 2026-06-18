static const int _ = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();
class DSU {
    public:
    vector<int> Size;
    int m=1e9;
    vector<int> parent;
    DSU(int n,int x) {
        Size.resize(n);
        parent.resize(n);
        for (int i = 0; i < n; i++) {
            Size[i] = 1;
            parent[i] = i;
        }
        m=x;
    }
    int find(int a) {
        if (parent[a] == a)
            return a;
        return parent[a] = find(parent[a]);
    }
    void union_size(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b)
            return;
        if(a>=m&&b>=m){
             if (Size[a] < Size[b]) {
            parent[b] = a;
            Size[a] += Size[b];
        } else {
            parent[a] = b;
            Size[b] += Size[a];
        }
        }
       else{ if (a < b) {
            parent[b] = a;
            Size[a] += Size[b];
        } else {
            parent[a] = b;
            Size[b] += Size[a];
        }}
    }
};
 class Solution {
public:
    vector<int> hitBricks(vector<vector<int>>& grid,
                          vector<vector<int>>& hits) {
        // start from last;
        int n = grid.size(), m = grid[0].size();
        unordered_set<int> store;
        for (int i = 0; i < hits.size(); i++) {
            auto x = hits[i];
            if (grid[x[0]][x[1]] == 1) {
                grid[x[0]][x[1]] = 0;
            } else
                store.insert(i);
        }
        DSU dsu(n * m,m);
        // int total
        vector<pair<int, int>> movee = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(grid[i][j]==1)for (auto move : movee) {
                    int childx = move.first + i;
                    int childy = move.second + j;
                    if (childx >= 0 && childy >= 0 && childx < n &&
                        childy < m && grid[childx][childy] == 1)
                        dsu.union_size(childx * m + childy, i * m + j);
                }
            }
        }
        vector<int> ans;
        // for(int i=0;i<n*m;i++)cout<<dsu.parent[i]<<" ";
        for (int i = hits.size() - 1; i >= 0; i--) {
            if (store.find(i) != store.end()) {
                ans.push_back(0);
                continue;
            } else {
                int flag = 0, x = hits[i][0], y = hits[i][1];
                if (x == 0)
                    flag = 1;
                int count=0;
                for (auto move : movee) {
                    int childx = move.first + x;
                    int childy = move.second + y;
                    if (childx >= 0 && childy >= 0 && childx < n &&
                        childy < m && grid[childx][childy] == 1) {
                        if (dsu.find(childx * m + childy) < m) {
                            flag = 1;
                        }
                         else if(dsu.find(x*m+y)!=dsu.find(childx * m + childy)){
                            count+=dsu.Size[dsu.find(childx*m+childy)];
                        }
                        dsu.union_size(x*m+y,childx*m+childy);
                    }
                }
                if(flag==1)ans.push_back(count);
                else ans.push_back(0);
                grid[x][y]=1;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};