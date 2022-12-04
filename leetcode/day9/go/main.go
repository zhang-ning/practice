package main

import (
	"fmt"

	"jonahnzhang.leetcode.com/leetcode/day9/go/pk"
)

func main() {

	nums := []int{1, 1, 1, 3, 3, 4, 3, 2, 4, 2}

	res := pk.ContainsDuplicate(nums)

	fmt.Printf("input is : %v \n", nums)
	fmt.Printf("res is : %v \n", res)

}
