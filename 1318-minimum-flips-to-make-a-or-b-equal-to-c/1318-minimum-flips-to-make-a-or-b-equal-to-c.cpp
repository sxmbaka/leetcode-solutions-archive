class Solution {
public:
    int minFlips(int a, int b, int c) {
        bitset<64> A(a), B(b), C(c), OR, AND, DIFF;
        OR = A | B;
        AND = A & B;
        DIFF = OR ^ C;
        int ans = 0;
        for (int i = 0; i < 64; i++) {
            if (C[i] != OR[i]) {
                if (C[i] and !OR[i]) ans++;
                else if (!C[i] and OR[i]) {
                    if (AND[i]) ans += 2;
                    else ans++;
                }
            }
        }

        // cout << A << endl;
        // cout << B << endl;
        // cout << OR << endl;
        // cout << "Expected : " << endl;
        // cout << C << endl;
        // cout << "Difference : " << endl;
        // cout << DIFF << endl;
        // cout << AND << endl;
        
        return ans;
    }
};