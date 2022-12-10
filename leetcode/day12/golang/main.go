package main

import (
	"fmt"

	"jonahnzhang.leetcode.com/leetcode/day12/golang/so"
)

func main() {

	nums1 := []int{1, 2, 3, 0, 0, 0}
	m := 3

	nums2 := []int{2, 5, 6}
	n := 3

	// std::vector<int> nums1 = {1};
	// int m = 1;
	// std::vector<int> nums2;
	// int n = 0;

	// std::vector<int> nums1 = {0};
	// int m = 0;
	// std::vector<int> nums2 = {1};
	// int n = 1;

	so.Merge(nums1, m, nums2, n)

	fmt.Printf("the nums1 res: %v \n", nums1)
}
