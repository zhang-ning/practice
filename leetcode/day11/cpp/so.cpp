#include "so.h"

std::vector<int> Solution::twoSum(std::vector<int> &nums, int target)
{
    std::map<int, int> m = {};

    std::vector<int> res = {};

    for (size_t i = 0; i < nums.size(); i++)
    {
        int num = nums[i];

        auto it = m.find(target - num);
        if (it != m.end())
        {
            res.push_back(i);
            res.push_back(it->second);
            return res;
        }
        m[num] = i;
    }

    return res;
}