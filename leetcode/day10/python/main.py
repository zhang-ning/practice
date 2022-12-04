import so


def main():
    s = so.Solution()
    nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
    res = s.maxSubArray(nums)
    print("res: {}".format(res))


if __name__ == "__main__":
    main()
