func max(a, b int) int { if a > b { return a }; return b }

func lengthOfLIS(nums []int) int {
    var n = len(nums)
	var lis = make([]int, n)
	var result = math.MinInt

	for i := 0; i < n; i++ {
		lis[i] = 1
		for j := 0; j < i; j++ {
			if nums[j] < nums[i] {
				lis[i] = max(lis[i], 1+lis[j])
			}
		}

		result = max(result, lis[i])
	}

	return result
}