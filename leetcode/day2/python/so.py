from itertools import product
from typing import List


class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        length = 0

        for word in words:
            notok = False
            for char in word:
                if (char not in allowed):
                    notok = True
            if (notok == False):
                length += 1

        return length
