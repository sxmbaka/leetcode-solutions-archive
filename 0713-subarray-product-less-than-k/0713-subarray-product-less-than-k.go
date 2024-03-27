func numSubarrayProductLessThanK(nums []int, k int) int {
    i, j := 0, 0
    cur := nums[0]
    res := 0
    for {
        if cur < k {
            res += j - i + 1
            j++
            if j >= len(nums) {
                break
            }
            cur *= nums[j]    
        } else {
            if i != j {
                cur /= nums[i] 
                i++
            } else {
                i++
                j++
                if j >= len(nums) {
                    break
                } else {
                    cur = nums[j]
                }
            }   
        }
    } 
    return res
}