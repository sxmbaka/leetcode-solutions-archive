class Solution {
public:
    bool isVowel(char c) {
        if (c == 'i' or c == 'o' or c == 'u' or c == 'a' or c == 'e') return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int vowels = 0, mv = INT_MIN;
        for (int i = 0; i < k; i++) if (isVowel(s[i])) vowels++;
        mv = vowels;
        for (int i = 1; i < (s.size() - k + 1); i++) {
            // i is the beginning of the window
            // i - 1 is the value to be excluded
            // i + k - 1 is the value to be included
            if (!isVowel(s[i - 1]) and isVowel(s[i + k - 1])) vowels++;
            else if (isVowel(s[i - 1]) and !isVowel(s[i + k - 1])) vowels--;
            // cout << "excl : " << s[i - 1] << " incl : " << s[i + k - 1] << " vow : " << vowels << endl;
            mv = max(mv, vowels);
        }
        return mv;
    }
};