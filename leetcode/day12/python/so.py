from typing import List


class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        i = len(nums1) - 1
        m = m-1
        n = n-1
        while (n >= 0):
            while (m >= 0 and nums1[m] > nums2[n]):
                nums1[i], nums1[m] = nums1[m], nums1[i]
                i = i-1
                m = m-1
            nums1[i], nums2[n] = nums2[n], nums1[i]
            i = i-1
            n = n-1
