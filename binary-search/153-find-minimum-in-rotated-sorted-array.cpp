class Solution {
public:
    int findMin(vector<int>& arr) {
         int start = 0, end = arr.size() - 1;
    int ans = 1e9 + 10;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // checking if right half is sorted
        if (arr[mid] < arr[end])
        {
            ans = min(ans, arr[mid]);
            end = mid - 1;
        }
        // if left half is sorted take the min
        else
        {
            ans = min(arr[start], ans);
            start = mid + 1;
        }
    }
    return ans;
    }
};