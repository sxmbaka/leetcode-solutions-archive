class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 0;
        while (j < nums.size()) {
            nums[i++] = nums[j];
            int curr = nums[j];
            while (j < nums.size() and nums[j] == curr) j++;
        }
        return i;
    }
};