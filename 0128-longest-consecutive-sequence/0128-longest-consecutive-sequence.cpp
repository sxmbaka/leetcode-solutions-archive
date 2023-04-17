class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int gmax = 0, lmax = 0, check;
        unordered_set<int> set(nums.begin(), nums.end());
        for (auto i : set) {
            if (!set.count(i - 1)) {
                lmax = 1;
                check = i;
                while (set.count(check + 1)) {
                    lmax++;
                    check++;
                }
                gmax = max(gmax, lmax);
            }
        }
        return gmax;
    }
};