#include "so.h"

void Solution::merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
{

    int i = nums1.size() - 1;
    m--;
    n--;
    while (n >= 0)
    {
        while (m >= 0 && nums1[m] > nums2[n])
        {
            std::swap(nums1[i--], nums1[m--]);
        }
        std::swap(nums1[i--], nums2[n--]);
    }
}