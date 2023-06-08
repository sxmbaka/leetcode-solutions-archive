class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size(), ans = 0;
        unordered_map<int, int> row, column;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j]) {
                    row[i]++;
                    column[j]++;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] and row[i] == 1 and column[j] == 1) {
                    ans++;
                }
            }
        }
        return ans;
    }
};