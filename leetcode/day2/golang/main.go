package main

import (
	"fmt"

	"jonahnzhang.leetcode.com/leetcode/day2/golang/pk"
)

func main() {
	// allowed := "cad"
	// words := []string{"cc", "acd", "b", "ba", "bac", "bad", "ac", "d"}

	allowed := "ab"
	words := []string{"ad", "bd", "aaab", "baa", "badab"}

	fmt.Println(pk.CountConsistentStrings(allowed, words))
}
