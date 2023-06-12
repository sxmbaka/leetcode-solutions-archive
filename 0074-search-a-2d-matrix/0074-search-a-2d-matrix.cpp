class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size();
        int left = 0, right = (rows * cols) - 1, mid = 0;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (matrix[mid / cols][mid % cols] == target) return true;
            else if (matrix[mid / cols][mid % cols] < target) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }
};