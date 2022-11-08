
import so
from typing import List


def main():
    allowed = "cad"
    words = ["cc", "acd", "b", "ba", "bac", "bad", "ac", "d"]

    s = so.Solution()
    res = s.countConsistentStrings(allowed, words)
    print("result", res)


if __name__ == "__main__":
    main()
