package main

/*
 * @lc app=leetcode id=1 lang=golang
 *
 * [1] Two Sum
 */

// @lc code=start
func twoSum(nums []int, target int) []int {
	var output []int
	numMap := make(map[int]int)

	for i, v := range nums {
		numMap[v] = i
	}
	for i, v := range nums {
		sums := target - v
		if index, ok := numMap[sums]; ok && index != i {
			output = append(output, i, index)
			break
		}
	}

	return output
}

// @lc code=end
