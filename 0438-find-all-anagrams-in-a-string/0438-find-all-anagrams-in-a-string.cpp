class Solution {
public:
    vector<int> findAnagrams(string s2, string s1) {
        vector<int> freq(26, 0);
        vector<int> ans;
        int i = 0, n = s2.size(), k = s1.size();
        if (n < k) return ans;
        for (i = 0; i < k; i++) {
            freq[s1[i] - 'a']++;
            freq[s2[i] - 'a']--;
        }
        if (allzero(freq)) ans.push_back(0);
        for (i = k; i < n; i++) {
            freq[s2[i] - 'a']--;
            freq[s2[i - k] - 'a']++;
            if (allzero(freq)) ans.push_back(i - k + 1);
        }
        return ans;
    }
    bool allzero(vector<int> &v) {
        for (auto i : v) {
            if (i != 0) return false;
        }
        return true;
    }
};