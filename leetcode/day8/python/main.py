
import so
from typing import List


def main():
    s = so.Solution()
    a: List[int] = [3, 4, 2, 1, 1, 0]
    # print(a[0])
    print("res: {}".format(s.findRepeatNumber(a)))


if __name__ == "__main__":
    main()
