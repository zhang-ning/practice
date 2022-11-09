#include "so.h"
#include <map>

vector<int> Solution::twoSum(vector<int> &nums, int target)
{

	map<int, int> m = {};
	int index = 0;
	vector<int> r;

	for (int &num : nums)
	{
		auto pos = m.find(target - num);

		if (pos == m.end())
		{
			m[num] = index;
		}
		else
		{
			r = {pos->second, index};
		}
		index++;
	}
	return r;
}