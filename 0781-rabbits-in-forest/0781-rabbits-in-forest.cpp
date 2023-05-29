class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> f;
        int ans = 0;
        for (auto i : answers) f[i]++;
        for (auto i : f) ans += ceil((double)i.second / (i.first + 1)) * (i.first + 1);
        return ans;
    }
};