class Solution {
    public int gridT(int m, int n, HashMap<String, Integer> memo) {
        if (memo.containsKey(m + " " + n)) {
            return memo.get(m + " " + n);
        } else if (m == 1 && n == 1) {
            return 1;
        } else if (m == 0 || n == 0) {
            return 0;
        }
        String key = m + " " + n;
        memo.put(key, gridT(m, n - 1, memo) + gridT(m - 1, n, memo));
        return memo.get(key);
    }
    public int uniquePaths(int m, int n) {
        HashMap<String, Integer> memo = new HashMap<>();
        return gridT(m, n, memo);
    }
}