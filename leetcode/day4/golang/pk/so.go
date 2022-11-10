package pk

import "strconv"

func IsPalindrome(x int) bool {
	n := strconv.Itoa(x)
	a := []rune(n)
	for i, j := 0, len(a)-1; i < j; i, j = i+1, j-1 {
		a[i], a[j] = a[j], a[i]
	}
	return string(a) == n
}
