class Solution {
public:
    int largestRectangle(vector<int>& heights) {
        // Write your code here.

        int n = heights.size();
        stack<int> st;
        vector<int> minimum_on_right(n, n);
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (!st.empty())
                minimum_on_right[i] = st.top();
            st.push(i);
        }
        stack<int> st1;
        vector<int> minimum_on_left(n, -1);
        for (int i = 0; i < n; i++) {
            while (!st1.empty() && heights[st1.top()] >= heights[i]) {
                st1.pop();
            }
            if (!st1.empty())
                minimum_on_left[i] = st1.top();
            st1.push(i);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            // use full height
            int h1 =
                (heights[i]) * (-minimum_on_left[i] + minimum_on_right[i] - 1);
            ans = max(h1, ans);
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& mat) {
        // std::ios::sync_with_stdio(false);
        // std::cin.tie(nullptr);
        // std::cout.tie(nullptr);
        int ans = 0, n = mat.size(), m = mat[0].size();
        vector<int> store(m, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == '0') {
                    store[j] = 0;
                } else
                    store[j]++;
            }
            ans = max(ans, largestRectangle(store));
        }
        return ans;
    }
};
    auto init = []() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  return '$';
}();