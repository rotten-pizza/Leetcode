class Solution {
public:
    int trap(vector<int>& height) {
         ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n = height.size();
        int left = 0, right = n - 1;
        int curr = 0, secMax = 0, ans = 0;
        while(left < right){
            curr = height[left] < height[right] ? height[left++] : height[right--];
            secMax = max(curr, secMax);
            ans += secMax - curr;
        }
        return ans;
    }
};