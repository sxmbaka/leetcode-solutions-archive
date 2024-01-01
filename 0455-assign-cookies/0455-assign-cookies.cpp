class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if (s.size() == 0) return 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int largestCandyLeft = s.size() - 1;
        int largestGreedLeft = g.size() - 1;
        int happyChildren = 0;
        while (true) {
            if (s[largestCandyLeft] >= g[largestGreedLeft]) {
                happyChildren++;
                largestCandyLeft--;
                largestGreedLeft--;
            }
            else if (s[largestCandyLeft] < g[largestGreedLeft]) {
                largestGreedLeft--;
            }
            if (largestCandyLeft == -1 or largestGreedLeft == -1) {
                break;
            }
        }
        return happyChildren;
    }
};