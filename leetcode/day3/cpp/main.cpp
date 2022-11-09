
#include "so.h"
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char **argv)
{
	Solution s{};
	std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> res = s.twoSum(nums, 5);

	for (size_t i = 0; i < res.size(); i++)
	{
		/* code */
		std::cout << res[i] << std::endl;
	}

	return 0;
}
