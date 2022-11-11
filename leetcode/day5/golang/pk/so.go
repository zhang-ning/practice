package pk

import (
	"fmt"
	"strconv"
	"strings"
)

type ListNode struct {
	Val  int
	Next *ListNode
}

/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func AddTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
	m, _ := l1.toInt64()
	n, _ := l2.toInt64()
	fmt.Println("m: ", m)
	fmt.Println("n: ", n)
	k := m + n
	fmt.Println("k: ", k)
	r := &ListNode{}
	r.fromInt64(k)
	return r
}

func (l *ListNode) fromInt64(i int64) error {
	s := strconv.FormatInt(i, 10)
	m := strings.Split(s, "")

	length := len(m)
	if length > 0 {
		i64, _ := strconv.ParseInt(m[0], 10, 8)
		n := &ListNode{}
		l.Val = int(i64)
		length--
		if length > 0 {
			fmt.Println("mm: ", m)
			l.Next = n
			k := m[1:]
			fmt.Println("the k ", k)
			q, _ := strconv.ParseInt(strings.Join(k, ""), 10, 64)
			fmt.Println("the q ", q)
			n.fromInt64(q)
		}
	}

	return nil
}

func (l *ListNode) toInt64() (int64, error) {

	m := []string{}
	tl := l
	if tl != nil {
		for tl.Next != nil {
			m = append(m, strconv.Itoa(tl.Val))
			tl = tl.Next
		}
		m = append(m, strconv.Itoa(tl.Val))
	}

	fmt.Println("mlist: ", m)

	// 反转slice
	for i, j := 0, len(m)-1; i < j; i, j = i+1, j-1 {
		m[i], m[j] = m[j], m[i]
	}
	s := strings.Join(m, "")
	return strconv.ParseInt(s, 10, 64)
}
