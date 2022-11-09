
import so
from typing import List


def main():
    target = 5
    nums = [1, 2, 3, 4, 5, 6, 7, 8, 9]

    s = so.Solution()
    res = s.twoSum(nums, target)
    print("result", res)


if __name__ == "__main__":
    main()
