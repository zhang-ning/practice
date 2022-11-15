
#include "so.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

int main(int argc, char **argv)
{
	Solution s{};

	ListNode *l = s.addTwoNumbers(new ListNode(2, new ListNode(4, new ListNode(3))),
				      new ListNode(5, new ListNode(6, new ListNode(4))));

	ListNode *_l = l;
	printf("ssss\n");
	while (_l != nullptr)
	{
		printf("the value is %d \n", _l->val);
		// std::cout << _l->val << std::endl;
		_l = _l->next;
	}

	return 0;
}
