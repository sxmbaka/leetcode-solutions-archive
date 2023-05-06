class Solution {
public:
    
    int bina(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = 0, left = 0, right = nums.size() - 1;

        vector<int> pow2mod(nums.size());
        pow2mod[0] = 1;
        for (int i = 1; i < nums.size(); i++) {
            pow2mod[i] = pow2mod[i - 1] * 2;
            pow2mod[i] %= 1000000007;
        }

        for (left = 0; left < nums.size(); left++) {
            right = bina(nums,target - nums[left]) - 1;
            // cout << left << " " << right << "ans : " << ans << endl;
            if (right >= left) {
                ans += pow2mod[right - left];
                ans %= 1000000007;
            }
        }
        return ans;
        
    }
};