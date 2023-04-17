class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        long long key;
        unordered_map<long long, vector<string>> m;
        vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
        for (auto i : strs) {
            key = 1;
            for (auto c : i)
                key = (key * primes[c - 97]) % 1000000007;
            m[key].push_back(i);
        }
        for (auto i : m) ans.push_back(i.second);
        return ans;
    }
};