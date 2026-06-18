class Solution {
public:
    int next(int n) {
        int sum = 0;
        while (n) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        while (n != 1 && n != 4) {
            n = next(n);
        }
        return n == 1;
    }
};