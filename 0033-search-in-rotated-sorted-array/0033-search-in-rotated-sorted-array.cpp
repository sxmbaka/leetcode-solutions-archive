class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, mid;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] >= nums[left]) {
                // left half is sorted and can be worked with
                if (nums[mid] > target and nums[left] <= target) right = mid - 1;
                else left = mid + 1;
            }
            else {
                // right half is sorted and can be worked with
                if (nums[mid] < target and nums[right] >= target) left = mid + 1;
                else right = mid - 1;
            }
        }
        return -1;
    }
};