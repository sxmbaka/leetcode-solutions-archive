class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int m = INT_MAX;
        for (auto i : nums) m = min(m, abs(i));
        for (int i = 0; i < nums.size() and k; i++) {
            if (nums[i] >= 0) break;
            nums[i] = -nums[i];
            k--;
        }
        int sum = 0;
        for (auto i : nums) sum += i;
        if (k & 1) sum -= (2 * m);
        cout << k << " " << m;
        return sum;
    }
};