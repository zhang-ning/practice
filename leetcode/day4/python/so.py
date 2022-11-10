class Solution:
    def isPalindrome(self, x: int) -> bool:
        m = str(x)
        return m == str(x)[::-1]
