class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (target < matrix[0][0] or target > matrix.back().back()) return false;
        for (int col = matrix[0].size() - 1; col >= 0; col--) {
            if (matrix[0][col] > target) continue;
            int left = 0, right = matrix.size() - 1, mid;
            while (left <= right) {
                mid = left + (right - left) / 2;
                if (matrix[mid][col] == target) return true;
                else if (matrix[mid][col] < target) left = mid + 1;
                else right = mid - 1;
            }
        }
        return false;
    }
};