class Solution {
public:
    int calcScore(vector<int> &v) {
        int s = 0, f = 0;
        for (auto i : v) {
            s += (f > 0)? 2 * i : i;
            f--;
            if (i == 10) f = 2;
        }
        return s;
    }
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int a = calcScore(player1), b = calcScore(player2);
        if (a > b) return 1;
        else if (a < b) return 2;
        else return 0;
    }
};