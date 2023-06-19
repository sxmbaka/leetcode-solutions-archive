class Solution {
public:
    vector<string> ans;

    void backtrack(string gen, int n, int open, int close) {
        if (open == n and close == n) {
            ans.push_back(gen);
        }
        if (open < n) {
            backtrack(gen + "(", n, open + 1, close);
        }
        if (close < open) {
            backtrack(gen + ")", n, open, close + 1);
        }
    }

    vector<string> generateParenthesis(int n) {
        backtrack("", n, 0, 0);
        return ans;
    }
};