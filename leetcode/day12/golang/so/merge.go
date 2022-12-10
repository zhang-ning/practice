package so

func Merge(nums1 []int, m int, nums2 []int, n int) {
	i := len(nums1) - 1
	m--
	n--
	for n >= 0 {

		for m >= 0 && nums1[m] > nums2[n] {
			nums1[i], nums1[m] = nums1[m], nums1[i]
			i--
			m--
		}
		nums1[i], nums2[n] = nums2[n], nums1[i]
		i--
		n--
	}

}
