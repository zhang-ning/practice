from typing import List


class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        dp = [0] * len(nums)
        dp[0] = nums[0]

        for i, num in enumerate(nums):
            if (i == 0):
                continue
            if dp[i-1] > 0:
                dp[i] = dp[i-1] + num
            else:
                dp[i] = num

        res = dp[0]

        for r in dp:
            res = max(r, res)
        return res
