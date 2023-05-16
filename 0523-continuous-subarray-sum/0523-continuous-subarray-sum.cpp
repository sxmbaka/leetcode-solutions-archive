class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        for (int i = 1; i < nums.size(); i++) nums[i] += nums[i - 1];
        for (int i = 0; i < nums.size(); i++) nums[i] %= k;
        unordered_map<int, int> map;
        map[0] = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (map.count(nums[i]) > 0) {
                if (i - map[nums[i]] > 1) return 1;
            }
            else
                map[nums[i]] = i;
        }
        return 0;
    }
};