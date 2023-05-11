class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        vector<vector<int>> dis(nums1.size(), vector<int> (nums2.size(), 0));
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
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
        return dis[nums1.size() - 1][nums2.size() - 1];
    }
};