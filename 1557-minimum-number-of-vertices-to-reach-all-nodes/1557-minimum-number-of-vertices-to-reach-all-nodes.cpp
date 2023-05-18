class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_map<int, bool> m;
        for (auto i : edges) {
            m[i[1]] = 1;
        }
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (!m[i]) ans.push_back(i);
        }
        return ans;
    }
};