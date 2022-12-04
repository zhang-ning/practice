#include "so.h"
#include <iostream>

int Solution::maxSubArray(std::vector<int> &nums)
{

    std::vector<int> dp = {nums[0]};

    for (size_t i = 1; i < nums.size(); i++)
    {
        /* code */
        auto num = nums[i];

        if (dp[i - 1] > 0)
        {

            dp.push_back(dp[i - 1] + nums[i]);
        }
        else
        {
            dp.push_back(num);
        }
    }

    int res = dp[0];

    for (size_t i = 0; i < dp.size(); i++)
    {
        /* code */
        res = std::max(res, dp[i]);
    }

    return res;
}