
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if (len(s) == 0):
            return 0
        left = 0
        maxlength = 0
        lookup = set()

        for i, char in enumerate(s):
            while (char in lookup):
                lookup.remove(s[left])
                left += 1
            maxlength = max(maxlength, i+1-left)
            lookup.add(char)
        return maxlength
