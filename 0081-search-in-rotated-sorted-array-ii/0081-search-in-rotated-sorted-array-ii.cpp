class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, mid = 0;
        while (left <= right) {
            // for (int i = left; i <= right; i++) cout << nums[i] << " ";
            // cout << endl;
            mid = left + (right - left) / 2;
            if (nums[mid] == target) return true;
            else if (nums[mid] == nums[left] and nums[mid] == nums[right]) left++;
            else if (nums[mid] >= nums[left]) {
                // left half is sorted
                if (nums[mid] > target and nums[left] <= target) right = mid - 1;
                else left = mid + 1;
            }
            else {
                // right half is sorted
                if (nums[mid] < target and nums[right] >= target) left = mid + 1;
                else right = mid - 1;
            }

        }
        return false;
    }
};