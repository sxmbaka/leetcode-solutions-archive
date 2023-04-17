class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26);
        for (auto i : s) v[i - 97]++;
        for (auto i : t) v[i - 97]--;
        for (auto i : v) if (i != 0) return false;
        return true;
    }
};