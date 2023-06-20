class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if (k == 0) return nums;
        int len = (2 * k) + 1, n = nums.size();
        vector<int> res(n, -1);
        if (n < len) return res;
        vector<long> sum(n + 1);
        for (int i = 0; i < n; i++) sum[i + 1] = sum[i] + nums[i];
        for (int i = k; i < n - k; i++) {
            res[i] = (sum[i + k + 1] - sum[i - k]) / len;
        }
        return res;
    }
};