class Solution {
public:
    bool checkValid(vector<vector<int>>& m) {
    int n = m.size();
    for (int i = 0; i < m.size(); ++i) {
        bitset<101> row, col;
        for (int j = 0; j <  m.size(); ++j)
            row[m[i][j]] = col[m[j][i]] = true;
        if (row.count() < n or col.count() < n)
            return false;
    }
    return true;
}
};