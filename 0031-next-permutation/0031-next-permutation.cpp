class Solution {
public:
    void swap(vector<int>& arr, int s, int e) {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
    }
    void reverse(vector<int>& arr, int s, int e) {
        while (s < e) {
            swap(arr, s, e);
            s++;
            e--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), i = n - 2;
        while (i >= 0 and nums[i] >= nums[i + 1]) i--;
        if (i < 0) reverse(nums, 0, n - 1);
        else {
            int j = n - 1;
            while (j >= 0 and nums[i] >= nums[j]) j--;
            // cout << i << " " << j;
            swap(nums, i, j);
            reverse(nums, i + 1, n - 1);
        }

    }
};