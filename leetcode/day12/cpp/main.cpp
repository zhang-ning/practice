#include <iostream>
#include "so.h"

int main()
{

    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    std::vector<int> nums2 = {2, 5, 6};
    int n = 3;

    // std::vector<int> nums1 = {1};
    // int m = 1;
    // std::vector<int> nums2;
    // int n = 0;

    // std::vector<int> nums1 = {0};
    // int m = 0;
    // std::vector<int> nums2 = {1};
    // int n = 1;

    Solution so;
    so.merge(nums1, m, nums2, n);

    for (size_t i = 0; i < nums1.size(); i++)
    {
        /* code */
        std::cout << "res: " << nums1[i] << "\n"
                  << std::endl;
    }

    return 0;
}