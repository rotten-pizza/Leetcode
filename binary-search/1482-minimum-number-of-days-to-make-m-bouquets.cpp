class Solution {
public:
    bool is_possible(vector<int>& bloom, int number_bouq, int number_of_flowers,
                     int max_day) {
        int flowers = 0;
        for (int i = 0; i < bloom.size(); i++) {
            if (bloom[i] > max_day) {
                flowers = 0;
            } else
                flowers++;
            if (flowers == number_of_flowers) {
                flowers = 0;
                number_bouq--;
            }
            if (number_bouq <= 0)
                return true;
        }
        return false;
    }
    int minDays(vector<int>& bloom, int m, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if(m*1ll*k>bloom.size())return -1;
        int start = 1, end = *max_element(bloom.begin(), bloom.end()), ans = -1;
        if(m*1ll*k==bloom.size())return end;
        while (start <= end) {
            int mid = (start + end) >> 1;
            if (is_possible(bloom, m, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else
                start = mid + 1;
        }
        return ans;
    }
};