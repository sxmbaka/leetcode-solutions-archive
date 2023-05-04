class Solution {
public:
    int lastRemaining(int n) {
        int front = 1;
        int step = 1;
        bool left = true;
        while (n > 1) {
            if (left or n & 1) front += step;
            n /= 2;
            step *= 2;
            left = !left;
        }
        return front;
    }
};