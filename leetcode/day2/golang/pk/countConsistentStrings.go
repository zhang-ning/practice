package pk

import (
	"strings"
)

func CountConsistentStrings(allowed string, words []string) int {
	length := 0
	for _, word := range words {
		notContainAll := false
		for i := 0; i < len(word); i++ {
			abc := word[i : i+1]
			if !strings.Contains(allowed, abc) {
				notContainAll = true
				break
			}
		}
		if !notContainAll {
			length++
		}
	}
	return length
}
