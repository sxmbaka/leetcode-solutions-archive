class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            if (isOdd(nums[left]) and isEven(nums[right]))
                swap(nums[left], nums[right]);
            else if (isOdd(nums[left]) and isOdd(nums[right]))
                right--;
            else if (isEven(nums[left]))
                left++;
        }
        return nums;
    }
private:
    bool isOdd(int n) {
        if (n & 1)
            return 1;
        return 0;
    }
    bool isEven(int n) {
        if (!isOdd(n))
            return 1;
        return 0;
    }
};