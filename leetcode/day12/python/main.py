
import so


def main():

    nums1 = [1, 2, 3, 0, 0, 0]
    m = 3
    nums2 = [2, 5, 6]
    n = 3

    s = so.Solution()
    s.merge(nums1, m, nums2, n)
    print("this is main", nums1)


if __name__ == "__main__":
    main()
