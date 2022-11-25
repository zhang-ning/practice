class Solution:
    def reverse(self, x: int) -> int:
        res = 0
        while (x != 0):
            # 每次取末尾数字
            if x > 0:
                tmp = x % 10
                x = x//10
            else:
                tmp = x % -10
                x = x//-10 * -1
            # 判断是否 大于 最大32位整数
            if (res > 214748364 or (res == 214748364 and tmp > 7)):
                return 0
            # 判断是否 小于 最小32位整数
            if (res < -214748364 or (res == -214748364 and tmp < -8)):
                return 0
            res = res * 10 + tmp
        return res
