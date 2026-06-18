class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
         ios_base::sync_with_stdio(0);
        // cin.tie(0);
        int start = 0, end = mat.size() - 1;
        while (start <= end) {
            int mid = (start + end) >> 1;
            int index = 0;

            for (int i = 1; i < mat[0].size(); i++) {
                if (mat[mid][index] < mat[mid][i])
                    index = i;
            }
            int prev = (mid == 0) ? -1 : mat[mid - 1][index];
            int next = (mid + 1 == mat.size()) ? -1 : mat[mid + 1][index];
            if (mat[mid][index] > prev && mat[mid][index] > next)
                return {mid, index};
            else if (mat[mid][index] < prev)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return {-1, -1};
    }
};