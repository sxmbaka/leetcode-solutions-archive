
class Solution {
private:
    bool isInArray(vector<int>& arr, int num) {
        for (auto i : arr) {
            if (num == i) {
                return true;
            }
        }
        return false;
    }

    void printArr(vector<vector<int>>& arr) {
        for (auto row : arr) {
            for (auto i : row) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> res;
        for (int j = 0; j < nums.size(); j++) {
            bool added = false;
            for (int i = 0; i < res.size(); i++) {
                if (!isInArray(res[i], nums[j])) {
                    // cout << "added " << nums[j] << " to " << i << "th row " << endl;
                    res[i].push_back(nums[j]);
                    added = true;
                    break;
                }
            }
            if (!added) {
                // cout << "added " << nums[j] << " to new row" << endl;
                res.push_back({nums[j]});
            }
            // printArr(res);
        }
        return res;
    }
};