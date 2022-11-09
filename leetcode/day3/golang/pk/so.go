package pk

func TwoSum(nums []int, target int) []int {

	m := make(map[int]int)
	for index, value := range nums {
		v, ok := m[target-value]
		if ok {
			return []int{v, index}
		} else {
			m[value] = index
		}
	}
	return []int{0, 0}
}
