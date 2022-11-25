package pk

func FindRepeatNumber(nums []int) int {

	i := 0
	r := -1

	for {

		v := nums[i]

		if v == i {
			i++
			continue
		}

		if nums[v] == v {
			r = v
			break
		}

		nums[i], nums[v] = nums[v], nums[i]
	}

	return r
}
