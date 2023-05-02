class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size(),  n = mat[0].size();
        vector<int> rowfreq(m, 0), colfreq(n, 0);
        vector<pair<int, int>> map(m * n + 1);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                map[mat[i][j]] = {i, j};
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            int row = map[arr[i]].first, col = map[arr[i]].second;
            rowfreq[row]++;
            colfreq[col]++;
            if (rowfreq[row] == n or colfreq[col] == m) return i;
        }
        return 0;
    }
};