class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int m = -1000000;
        for (auto i : candies) m = max(m, i);
        for (auto i : candies) {
            if (i + extraCandies >= m) res.push_back(true);
            else res.push_back(false);
        }
        return res;
    }
};