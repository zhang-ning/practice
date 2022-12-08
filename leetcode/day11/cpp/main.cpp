#include <iostream>
#include "so.h"

int main()
{
    Solution so;

    std::vector<int> nums = {3, 2, 4};
    int target = 6;

    for (int i : so.twoSum(nums, target))
    {
        std::cout << i << std::endl;
    }
}