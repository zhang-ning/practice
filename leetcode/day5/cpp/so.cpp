#include "so.h"

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2)
{

	ListNode *head, *tail;
	int carry = 0;

	while (l1 != nullptr || l2 != nullptr)
	{
		int n1 = 0, n2 = 0;

		if (l1 != nullptr)
		{
			n1 = l1->val;
			l1 = l1->next;
		}

		if (l2 != nullptr)
		{
			n2 = l2->val;
			l2 = l2->next;
		}

		int sum = n1 + n2 + carry;
		sum = sum % 10;
		carry = sum / 10;

		if (head == nullptr)
		{
			head = new ListNode(sum);
			tail = head;
		}
		else
		{
			tail->next = new ListNode(sum);
			tail = tail->next;
		}
	}

	if (carry > 0)
	{
		tail->next = new ListNode(carry);
	}

	return head;
}