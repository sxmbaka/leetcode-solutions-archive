class Solution {
public:
    int pivotInteger(int n) {
        vector<int> pref;
        int sum = 0;
        for (auto i = 0; i <= n; i++) {
            sum += i;
            pref.push_back(sum);
        }
        int ans = -1;
        for (int i = 0; i <= n; i++) {
            if (pref[n] - pref[i] + i ==  pref[i]) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};