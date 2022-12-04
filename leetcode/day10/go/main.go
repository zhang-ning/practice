package main

import (
	"fmt"

	"jonahnzhang.leetcode.com/leetcode/day10/go/pk"
)

func main() {
	res := pk.MaxSubArray([]int{-2, 1, -3, 4, -1, 2, 1, -5, 4})

	fmt.Printf("res: %v \n", res)
}
