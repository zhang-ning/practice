#include "so.h"

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2)
{

	ListNode *head = nullptr, *tail = nullptr; // 如果不使用 nullptr 是野指针，而不是空指针！！
	int carry = 0;

	while (l1 != nullptr || l2 != nullptr)
	{
		int n1 = 0, n2 = 0;

		if (l1 != nullptr)
		{
			n1 = l1->val;
		}

		if (l2 != nullptr)
		{
			n2 = l2->val;
		}

		int sum = n1 + n2 + carry;
		carry = sum / 10;
		sum = sum % 10;

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

		if (l1 != nullptr)
		{
			l1 = l1->next;
		}

		if (l2 != nullptr)
		{
			l2 = l2->next;
		}
	}

	if (carry > 0)
	{
		tail->next = new ListNode(carry);
	}

	return head;
}