class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;
        long long s = 1, e = num, m;
        while (s < e) {
            m = ((s + e) / 2);
            if (m * m == num) return true;
            else if (m * m > num) e = m;
            else if (m * m < num) s = m + 1;
        }
        return false;
    }
};