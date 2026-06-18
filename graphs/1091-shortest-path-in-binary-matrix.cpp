class Solution {
public:
    bool is_valid(int x, int y, int n, int m) {
        return x >= 0 && y >= 0 && x < n && y < m;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        std::ios_base::sync_with_stdio(false);
        std::cout.tie(0);

        if (grid[0][0] == 1 || grid.back().back() == 1)
            return -1;
        vector<pair<int, int>> movements = {{0, 1}, {1, 0},   {-1, 0}, {0, -1},
                                            {1, 1}, {-1, -1}, {-1, 1}, {1, -1}};
        queue<pair<int, int>> q;
        q.push({0, 0});
        grid[0][0]=1;
        int flag = 0;
        int level = 1;
        while (!q.empty()) {
            int len = q.size();
            for (int i = 0; i < len; i++) {
                if(q.front().first==grid.size()-1&&q.front().second==grid[0].size()-1)return level;
                for (auto move : movements) {
                    int x_child = q.front().first+move.first;
                    int y_child = q.front().second+move.second;
                    if (is_valid(x_child, y_child, grid.size(),
                                 grid[0].size()) &&
                        grid[x_child][y_child] == 0) {
                        q.push({x_child, y_child});
                        grid[x_child][y_child] = 1;
                    }
                }
                q.pop();
            }
             level++;
        }
        return -1;
    }
};