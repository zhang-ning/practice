#include "so.h"

std::vector<int> Solution::intersect(std::vector<int> &nums1, std::vector<int> &nums2)
{

	std::map<int, int> m;
	for (auto num : nums1)
	{
		if (m.find(num) == m.end())
		{
			m[num] = 1;
		}
		else
		{
			m[num] = m[num] + 1;
		}
	}

	std::map<int, int> n;

	for (auto num : nums2)
	{

		// std::cout << "num: " << num << std::endl;

		if (m.find(num) != m.end())
		{

			// std::cout << "n before: " << num << "," << n[num] << std::endl;
			if (n[num] > 0)
			{
				n[num] = n[num] + 1;
			}
			else
			{
				n[num] = 1;
			}
			// std::cout
			//     << "n after: " << num << "," << n[num] << std::endl;
		}
	}

	std::vector<int> r;

	for (auto k : n)
	{

		// std::cout << "k first: " << k.first << std::endl;
		// std::cout << "k second: " << k.second << std::endl;
		int n = std::min(k.second, m[k.first]);
		for (size_t i = 0; i < n; i++)
		{
			/* code */
			r.push_back(k.first);
		}
	}
	return r;
}