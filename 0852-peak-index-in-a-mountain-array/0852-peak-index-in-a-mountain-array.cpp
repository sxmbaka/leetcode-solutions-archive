class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 1, right = arr.size() - 2, mid;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (arr[mid - 1] < arr[mid] and arr[mid] > arr[mid + 1]) return mid;
            else if (arr[mid - 1] < arr[mid] and arr[mid] < arr[mid + 1]) left = mid + 1;
            else right = mid - 1;
        }
        return 1;
    }
};