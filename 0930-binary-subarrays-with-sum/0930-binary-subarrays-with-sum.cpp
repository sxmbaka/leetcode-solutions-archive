class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int prefixSum = 0;
        int result = 0;
        unordered_map<int, int> fr;
        for (auto num : nums) {
            prefixSum += num;
            if (prefixSum == goal) {
                result++;
            }
            if (fr.find(prefixSum - goal) != fr.end()) {
                result += fr[prefixSum - goal];
            }
            fr[prefixSum]++;
        }
        return result;
    }
};