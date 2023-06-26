class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> freq(101, 0);
        int idx = 0, res = 0;
        for (auto i : heights) freq[i]++;
        for (int i = 0; i <= 100; i++) {
            while (freq[i]--) {
                if (heights[idx++] != i) res++;
            }
        }
        return res;
    }
};