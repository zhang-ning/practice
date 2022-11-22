package main

import (
	"fmt"

	"jonahnzhang.leetcode.com/leetcode/day6/golang/pk"
)

func main() {

	fmt.Printf("the longest length is %d \n", pk.LengthOfLongestSubstring("abcabcdewabc"))
	fmt.Printf("the longest length is %d \n", pk.LengthOfLongestSubstring("mmm"))
	fmt.Printf("the longest length is %d \n", pk.LengthOfLongestSubstring("pwwkew"))
}
