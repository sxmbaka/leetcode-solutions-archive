class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0, mi = INT_MAX;
        for (auto i : nums) {
            sum += i;
            mi = min(mi, sum);
        }
        if (mi >= 0) return 1;
        else return -mi + 1;
    }
};