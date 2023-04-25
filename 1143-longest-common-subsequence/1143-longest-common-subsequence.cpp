class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int ans = 0;
        vector<vector<int>> dis(text1.length(), vector<int> (text2.length(), 0));
        for (int i = 0; i < text1.length(); i++) {
            for (int j = 0; j < text2.length(); j++) {
                if (text1[i] == text2[j]) {
                    if (i == 0 or j == 0) dis[i][j] = 1;
                    else dis[i][j] = dis[i - 1][j - 1] + 1;
                }
                else {
                    int a = 0, b = 0;
                    if (i != 0) b = dis[i - 1][j];
                    if (j != 0) a = dis[i][j - 1];
                    dis[i][j] = max(a, b);
                }
            }
        }
        return dis[text1.length() - 1][text2.length() - 1];
    }
};