class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        if (nums.size() > set.size()) return true;
        return false;
    }
};