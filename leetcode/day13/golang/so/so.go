package so

import "sort"

func Intersect(nums1 []int, nums2 []int) []int {
	r := []int{}
	sort.Ints(nums1)
	sort.Ints(nums2)

	len1, len2 := len(nums1), len(nums2)
	idx1, idx2 := 0, 0

	for idx1 < len1 && idx2 < len2 {

		if nums1[idx1] < nums2[idx2] {
			idx1++
		} else if nums2[idx2] < nums1[idx1] {
			idx2++
		} else {
			r = append(r, nums1[idx1])
			idx1++
			idx2++
		}

	}

	return r
}
