class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size(), ans = 0;
        vector<string> rowString, colString;
        for (int i = 0; i < n; i++) {
            string temp = "";
            for (int j = 0; j < n; j++) {
                temp += ',' + to_string(grid[i][j]);
            }
            rowString.push_back(temp);
        }
        for (int i = 0; i < n; i++) {
            string temp = "";
            for (int j = 0; j < n; j++) {
                temp += ',' + to_string(grid[j][i]);
            }
            colString.push_back(temp);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (rowString[i] == colString[j]) ans++;
            }
        }
        return ans;
    }
};