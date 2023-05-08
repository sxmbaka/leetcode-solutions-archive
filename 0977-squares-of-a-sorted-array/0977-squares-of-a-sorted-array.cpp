class Solution {
public:
    int sq(int n) {
        return n * n;
    }
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        vector<int> ans;
        while (i <= j) {
            if (abs(nums[i]) < abs(nums[j])) ans.insert(ans.begin(), sq(nums[j--]));
            else ans.insert(ans.begin(), sq(nums[i++]));
        }
        return ans;
    }
};