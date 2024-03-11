class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> mp;
        string result = "";
        for (auto i : order) {
            mp[i] = -1;
        }
        for (auto i : s) {
            if (mp.find(i) != mp.end()) {
                if (mp[i] == -1) mp[i] = 1;
                else mp[i]++;
            }
        }
        for (auto i = 0; i < order.size(); i++) {
            for (int j = 0; j < mp[order[i]]; j++)
                result += order[i];
        }
        for (int i = 0; i < s.size(); i++) {
            if (mp.find(s[i]) == mp.end())
                result += s[i];
        }
        return result;
    }
};