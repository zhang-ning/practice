package main

import (
	"fmt"

	"jonahnzhang.leetcode.com/leetcode/day8/golang/pk"
)

func main() {

	a := []int{3, 4, 2, 1, 1, 0}
	fmt.Printf("result : %d \n",
		pk.FindRepeatNumber(a))
}
