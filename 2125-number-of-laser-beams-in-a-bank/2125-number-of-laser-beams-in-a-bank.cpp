class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> consecRows;
        int res = 0;
        for (auto row : bank) {
            int laserCnt = 0;
            for (char unit : row) {
                if (unit == '1') laserCnt++;
            }
            cout << laserCnt << endl;
            if (laserCnt) consecRows.push_back(laserCnt);
        }
        for (int i = 1; i < consecRows.size(); i++) {
            res += consecRows[i - 1] * consecRows[i];
        }
        return res;
    }
};