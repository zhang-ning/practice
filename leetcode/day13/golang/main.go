package main

import (
	"fmt"

	"jonahnzhang.leetcode.com/leetcode/day13/golang/so"
)

func main() {
	nums1 := []int{4, 9, 5}
	nums2 := []int{9, 4, 9, 8, 4}

	r := so.Intersect(nums1, nums2)

	fmt.Printf("res: %v \n", r)
}
