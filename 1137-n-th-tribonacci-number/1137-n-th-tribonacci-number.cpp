class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 or n == 2) return 1;
        vector<int> tri(n + 1);
        tri[0] = 0;
        tri[1] = 1;
        tri[2] = 1;
        
        return triDP(n, tri);
    }
private:
    int triDP(int n, vector<int>& tri) {
        if (n == 0) return 0;
        if (n >= 1 and tri[n] != 0) return tri[n];
        tri[n] = triDP(n - 1, tri) + triDP(n - 2, tri) + triDP(n - 3, tri);
        return tri[n];
    }
};