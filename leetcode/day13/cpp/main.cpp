#include "so.h"
#include <iostream>

int main()
{
	Solution so;

	// std::vector<int> nums1 = {1, 2, 2, 1}, nums2 = {2, 2};
	// std::vector<int> nums1 = {4, 9, 5}, nums2 = {9, 4, 9, 8, 4};

	std::vector<int> nums1 = {43, 85, 49, 2, 83, 2, 39, 99, 15, 70, 39, 27, 71, 3, 88, 5, 19, 5, 68, 34, 7, 41, 84, 2, 13, 85, 12, 54, 7, 9, 13, 19, 92},
			 nums2 = {10, 8, 53, 63, 58, 83, 26, 10, 58, 3, 61, 56, 55, 38, 81, 29, 69, 55, 86, 23, 91, 44, 9, 98, 41, 48, 41, 16, 42, 72, 6, 4, 2, 81, 42, 84, 4, 13};

	std::vector<int>
	    res = so.intersect(nums1, nums2);

	for (auto r : res)
	{
		std::cout << "r : " << r << std::endl;
	}

	return 0;
}