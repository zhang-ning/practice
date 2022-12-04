#include "so.h"

bool Solution::containsDuplicate(std::vector<int> &nums)
{

    std::map<int, int> m = {};
    for (auto item = nums.begin(); item != nums.end(); item++)
    {
        if (m.find(*item) != m.end())
        {
            return true;
        }
        m[*item] = *item;
    }

    return false;
}