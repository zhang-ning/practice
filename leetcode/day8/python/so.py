from typing import List


class Solution:
    def findRepeatNumber(self, nums: List[int]) -> int:
        r = -1
        i = 0
        while i < len(nums):
            v = nums[i]
            if (v == i):
                i = i+1
                continue
            if (nums[v] == v):
                r = v
                break
            nums[v], nums[i] = nums[i], nums[v]
        return r
