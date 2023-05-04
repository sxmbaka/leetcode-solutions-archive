class Solution {
public:
    string predictPartyVictory(string senate) {
        int i = 0, n = senate.size();
        while (1) {
            if (senate[i] == 'R') {
                int start = i;
                while (senate[i] != 'D') {
                    i = (i + 1) % n;
                    if (i == start) return "Radiant";
                }
                senate[i] = '_';
                // i = (i + 1) % n;
                i = (start + 1) % n;
            }
            else if (senate[i] == 'D') {
                int start = i;
                while (senate[i] != 'R') {
                    i = (i + 1) % n;
                    if (i == start) return "Dire";
                }
                senate[i] = '_';
                // i = (i + 1) % n;
                i = (start + 1) % n;
            }
            else i = i = (i + 1) % n;
            // cout << senate << endl;
        }
    }
};