#include <iostream>
#include "so.h"

int main()
{
    Solution so;

    // std::vector<int> t = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::vector<int> t = {5, 4, -1, 7, 8};

    int res = so.maxSubArray(t);

    std::cout << "res: " << res << "\n"
              << std::endl;

    return 0;
}