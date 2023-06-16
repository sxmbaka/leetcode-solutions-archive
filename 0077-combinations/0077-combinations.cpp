class Solution {
public:
    vector<vector<int>> ans;
    void comb(int n, vector<int>& gen, int k) {
        if (k == 0) ans.push_back(gen);
        if (k == 0 or n == 0) return;
        gen.push_back(n);
        comb(n - 1, gen, k - 1);
        gen.pop_back();
        comb(n - 1, gen, k);
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> gen;
        comb(n, gen, k);
        return ans;
    }
};