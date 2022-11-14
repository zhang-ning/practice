
#include "so.h"
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char **argv)
{
	Solution s{};

	std::cout << s.addTwoNumbers(new ListNode(1, new ListNode(2, new ListNode(3))),
				     new ListNode(4, new ListNode(5, new ListNode(6))))
		  << std::endl;
	return 0;
}
