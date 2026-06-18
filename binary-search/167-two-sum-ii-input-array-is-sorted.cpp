class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // ios_base::sync_with_stdio(0);
        // cin.tie(0);
        // cout.tie(0);
        int left = 0, right = 0;
        int start = 0, end = numbers.size() - 1;
        while (start < end) {
            if (numbers[start] + numbers[end] == target) {
                return {start + 1, end + 1};
            } else if (numbers[start] + numbers[end] > target)
                end--;
            else
                start++;
        }
        return {0, 0};
    }
};