// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long f = 1, l = n, m;
        while (f <= l) {
            m = (l + f) / 2;
            if (isBadVersion(m)) l = m;
            else f = m + 1;
            if (f == l) return f;
        }
        return f;
    }
};