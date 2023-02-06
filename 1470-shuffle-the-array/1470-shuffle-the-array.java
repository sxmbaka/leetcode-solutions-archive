class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] res = new int[n * 2];
        int idx = 0;
        for (int i = 0; i < n; i++) {
            res[idx] = nums[i];
            idx++;
            res[idx] = nums[n + i];
            idx++;
        }
        return res;
    }
}