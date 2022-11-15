
import so
from so import ListNode
from typing import Optional


def main():

    s = so.Solution()

    l1 = ListNode(2, ListNode(4, ListNode(3)))

    l2 = ListNode(5, ListNode(6, ListNode(4)))

    l3 = s.addTwoNumbers(l1, l2)

    _l = l3

    while (_l != None):
        print(_l.val)
        _l = _l.next


if __name__ == "__main__":
    main()
