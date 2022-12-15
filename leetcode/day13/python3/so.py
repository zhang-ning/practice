from typing import List


class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        r: List[int] = []
        nums1.sort()
        nums2.sort()

        len1, len2 = len(nums1), len(nums2)
        idx1, idx2 = 0, 0
        while (idx1 < len1 and idx2 < len2):
            if (nums1[idx1] < nums2[idx2]):
                idx1 += 1
            elif (nums2[idx2] < nums1[idx1]):
                idx2 += 1
            else:
                r.append(nums1[idx1])
                idx1 += 1
                idx2 += 1
        return r
