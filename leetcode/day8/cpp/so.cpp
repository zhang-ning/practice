#include "so.h"
#include "iostream"

int Solution::findRepeatNumber(std::vector<int> &nums)
{

    for (size_t i = 0; i < nums.size();)
    {
        /* code */
        int val = nums[i];
        if (val == i)
        {
            i++;
            continue;
        }

        if (nums[val] == val)
        {
            return val;
        }

        nums[i] = nums[val];
        nums[val] = val;
    }

    return -1;
}