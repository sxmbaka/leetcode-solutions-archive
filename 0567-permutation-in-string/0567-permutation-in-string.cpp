class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26, 0);
        int i = 0, n = s2.size(), k = s1.size();
        if (n < k) return false;
        for (i = 0; i < k; i++) {
            freq[s1[i] - 'a']++;
            freq[s2[i] - 'a']--;
        }
        if (allzero(freq)) return true;
        for (i = k; i < n; i++) {
            freq[s2[i] - 'a']--;
            freq[s2[i - k] - 'a']++;
            if (allzero(freq)) return true;
        }
        return false;
    }
    bool allzero(vector<int> &v) {
        for (auto i : v) {
            if (i != 0) return false;
        }
        return true;
    }
};