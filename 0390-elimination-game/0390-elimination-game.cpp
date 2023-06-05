class Solution {
public:
    int lastRemaining(int n, int front = 1, int step = 1, bool left = true) {
        return (n == 1)? front : lastRemaining(n / 2, (left or n & 1)? front + step : front, 2 * step, !left);
    }
};