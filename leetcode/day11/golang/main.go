package main

import (
	"fmt"

	"jonahnzhang.leetcode.com/leetcode/day11/golang/pk"
)

func main() {

	target := 6
	nums := []int{3, 2, 4}
	res := pk.TwoSum(nums, target)
	fmt.Printf("res: %v \n", res)

}
