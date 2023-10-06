class Solution {
public:
    int integerBreak(int n) {
      int m = 1;
      for (int i = n - 1; i > 1; i--) {
        int q = n / i;
        int r = n % i;
        int ans = (pow((q + 1), r) * pow(q, (i - r)));
        // cout << "for " << i << " parts, " << "q = " << q << ", r = " << r << ", ans = " << ans << endl;
        m = max(m, ans);
      }
      return m;
    }
};