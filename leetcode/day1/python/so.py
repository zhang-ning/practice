from itertools import product
from typing import List


class Solution:
    def ambiguousCoordinates(self, s: str) -> List[str]:
        def get_pos(s: str) -> List[str]:
            pos = []
            if s[0] != '0' or s == '0':
                pos.append(s)
            for p in range(1, len(s)):
                if p != 1 and s[0] == '0' or s[-1] == '0':
                    continue
                pos.append(s[:p] + '.' + s[p:])
            return pos

        n = len(s) - 2
        res = []
        s = s[1: len(s) - 1]
        for l in range(1, n):
            lt = get_pos(s[:l])
            if len(lt) == 0:
                continue
            rt = get_pos(s[l:])
            if len(rt) == 0:
                continue
            for i, j in product(lt, rt):
                res.append('(' + i + ', ' + j + ')')
        return res


# 作者：LeetCode-Solution
# 链接：https: // leetcode.cn/problems/ambiguous-coordinates/solution/mo-hu-zuo-biao-by-leetcode-solution-y1yz/
# 来源：力扣（LeetCode）
# 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
