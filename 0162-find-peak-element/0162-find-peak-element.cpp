class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;
        if (nums[0] > nums[1]) return 0;
        else if (nums[n - 1] > nums[n - 2]) return n - 1;
        nums.insert(nums.begin(), INT_MIN);
        nums.push_back(INT_MIN);
        int front = 0, back = n, mid;
        while (front <= back) {
            mid = front + (back - front) / 2;
            if (nums[mid] > nums[mid - 1] and nums[mid] > nums[mid + 1]) return mid - 1;
            else if (nums[mid - 1] < nums[mid] and nums[mid] < nums[mid + 1]) front = mid + 1;
            else back = mid - 1;
        }
        return 0;
    }
};