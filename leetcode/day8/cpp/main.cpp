#include <vector>
#include <iostream>
#include "so.h"

int main()
{
    Solution so{};

    std::vector<int> a = {2, 3, 1, 0, 2, 5, 3};
    // std::cout << so.findRepeatNumber(a) << std::endl;

    a = {3, 4, 2, 1, 1, 0};
    std::cout << so.findRepeatNumber(a) << std::endl;

    return 0;
}