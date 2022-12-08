from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        m: map = {}
        for i, v in enumerate(nums):
            if (target-v in m):
                return [m.get(target-v), i]
            m[v] = i
