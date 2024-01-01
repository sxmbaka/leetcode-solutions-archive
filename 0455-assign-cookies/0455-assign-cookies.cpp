// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {
//         if (s.size() == 0) return 0;
//         sort(g.begin(), g.end());
//         sort(s.begin(), s.end());
//         int largestCandyLeft = s.size() - 1;
//         int largestGreedLeft = g.size() - 1;
//         int happyChildren = 0;
//         while (true) {
//             if (s[largestCandyLeft] >= g[largestGreedLeft]) {
//                 happyChildren++;
//                 largestCandyLeft--;
//                 largestGreedLeft--;
//             }
//             else if (s[largestCandyLeft] < g[largestGreedLeft]) {
//                 largestGreedLeft--;
//             }
//             if (largestCandyLeft == -1 or largestGreedLeft == -1) {
//                 break;
//             }
//         }
//         return happyChildren;
//     }
// };

class Solution {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        int contentChildren = 0;
        int cookieIndex = 0;
        while (cookieIndex < s.size() && contentChildren < g.size()) {
            if (s[cookieIndex] >= g[contentChildren]) {
                contentChildren++;
            }
            cookieIndex++;
        }
        return contentChildren;
    }
};