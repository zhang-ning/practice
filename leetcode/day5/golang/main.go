package main

import (
	"fmt"

	"jonahnzhang.leetcode.com/leetcode/day5/golang/pk"
)

// https://leetcode.cn/problems/add-two-numbers/

func main() {

	// m := []string{"1"}

	// fmt.Println(m[1:len(m)])

	l1 := pk.ListNode{Val: 2, Next: &pk.ListNode{
		Val: 4,
		Next: &pk.ListNode{
			Val: 3,
		},
	}}
	// 243
	// 569
	l2 := pk.ListNode{Val: 5, Next: &pk.ListNode{
		Val: 6,
		Next: &pk.ListNode{
			Val: 9,
		},
	}}

	l3 := pk.AddTwoNumbers(&l1, &l2)
	// fmt.Println(l3.Val)
	// fmt.Println(l3.Next.Val)
	// fmt.Println(l3.Next.Next.Val)
	// fmt.Println(l3.Next.Next.Next.Val)
	// fmt.Println(l3.Next.Next.Next.Val)

	_l := l3
	for _l.Next != nil {
		fmt.Println("l3: ", _l.Val)
		_l = _l.Next
	}
	fmt.Println("l3: ", _l.Val)
}
