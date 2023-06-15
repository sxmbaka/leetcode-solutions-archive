class Solution {
public:
    vector<string> ans;
    unordered_map<char, vector<char>> map;
    

    void backtrack(int idx, string digits, string generated) {
        if (idx == digits.size()) {
            ans.push_back(generated);
            return;
        }
        for (auto i : map[digits[idx]]) {
            backtrack(idx + 1, digits, generated + i);
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) return ans;
        map['2'] = {'a', 'b', 'c'};
        map['3'] = {'d', 'e', 'f'};
        map['4'] = {'g', 'h', 'i'};
        map['5'] = {'j', 'k', 'l'};
        map['6'] = {'m', 'n', 'o'};
        map['7'] = {'p', 'q', 'r', 's'};
        map['8'] = {'t', 'u', 'v'};
        map['9'] = {'w', 'x', 'y', 'z'};
        backtrack(0, digits, "");
        return ans;
    }
};