class Solution {
public:
    vector<vector<int>> ans;
    void subseq(int i, vector<int>& arr, vector<int> sub, int n) {
        if (i >= n) {
            ans.push_back(sub);
            return;
        }
        sub.push_back(arr[i]);
        subseq(i + 1, arr, sub, n);
        sub.pop_back();
        subseq(i + 1, arr, sub, n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        subseq(0, nums, {}, nums.size());
        return ans;
    }
};