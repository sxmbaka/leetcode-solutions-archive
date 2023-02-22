class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& p) {
        int cnt = 0, n = p.size();
        for (int i = 0; i < n; i++) {
            unordered_map<int, int> m;
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    int d = pow(p[i][1] - p[j][1], 2) + pow(p[i][0] - p[j][0], 2);
                    m[d] ++;
                }
            }
            for (auto itr : m) {
                cnt += itr.second * (itr.second - 1);
            }
        }
        return cnt;
    }
};