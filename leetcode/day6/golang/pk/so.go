package pk

func LengthOfLongestSubstring(s string) int {
	if len(s) == 0 {
		return 0
	}

	left := 0
	maxlength := 0
	lookup := make(map[rune]int)
	sr := []rune(s)

	for i := 0; i < len(s); i++ {
		for {
			if _, ok := lookup[sr[i]]; ok {
				delete(lookup, sr[left])
				left++
			} else {
				break
			}
		}

		lookup[sr[i]] = i
		maxlength = max(maxlength, i+1-left)
	}

	return maxlength
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}
