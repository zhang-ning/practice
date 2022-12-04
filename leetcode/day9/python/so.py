
from typing import List


class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        m = {}
        for num in nums:
            if (num in m):
                return True
            m[num] = num
        return False
