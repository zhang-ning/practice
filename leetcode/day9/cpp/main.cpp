#include "so.h"
#include <vector>
#include <iostream>

int main()
{

    Solution s;

    std::vector<int> input = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    bool flag = s.containsDuplicate(input);

    std::cout << "result is : " << std::boolalpha << flag << std::endl;
}