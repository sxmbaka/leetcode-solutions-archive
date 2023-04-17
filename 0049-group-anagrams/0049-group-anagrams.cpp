class Solution {
public:
    string sorted(string s) {
        sort(s.begin(), s.end());
        return s;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        string key;
        unordered_map<string, vector<string>> m;
        for (auto i : strs) {
            key = sorted(i);
            m[key].push_back(i);
        }
        for (auto i : m) {
            ans.push_back(i.second);
        }
        return ans;
    }
};