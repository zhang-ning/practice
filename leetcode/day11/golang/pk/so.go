package pk

func TwoSum(nums []int, target int) []int {

	m := make(map[int]int)
	r := []int{}

	for i := 0; i < len(nums); i++ {
		if v, ok := m[target-nums[i]]; ok {
			r = append(r, v)
			r = append(r, i)
			return r
		}
		m[nums[i]] = i
	}
	return r

}
