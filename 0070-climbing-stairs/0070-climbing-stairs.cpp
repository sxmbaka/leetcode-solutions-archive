class Solution {
public:
    int climbStairs(int n) {
        vector<int> ways(n + 1);
        ways[0] = 1;
        ways[1] = 1;
        
        return climbStairsDP(n, ways);
    }
private:
    int climbStairsDP(int n, vector<int>& ways) {
        if (ways[n] != 0)
            return ways[n];
        ways[n] = climbStairsDP(n - 1, ways) + climbStairsDP(n - 2, ways);
        return ways[n];
    }
};