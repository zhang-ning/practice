

from itertools import product
from typing import Optional
from typing import List


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        head, tail = None, None
        carry = 0

        while (l1 or l2):
            n1, n2 = 0, 0
            if (l1 != None):
                n1 = l1.val
            if (l2 != None):
                n2 = l2.val
            sum = n1 + n2 + carry
            carry = int(sum / 10)
            sum = int(sum % 10)

            if (l1 != None):
                l1 = l1.next
            if (l2 != None):
                l2 = l2.next

            if (head == None):
                head = ListNode(sum)
                tail = head
            else:
                tail.next = ListNode(sum)
                tail = tail.next

        if carry > 0:
            tail.next = ListNode(carry)

        return head
