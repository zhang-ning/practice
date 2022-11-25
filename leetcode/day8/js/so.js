/**
 * @param {number[]} nums
 * @return {number}
 */
var findRepeatNumber = function (nums) {
    let r = -1;
    let i = 0;

    while (i < nums.length) {

        v = nums[i]

        if (i === v) {
            i++;
            continue;
        }

        if (nums[v] === v) {
            r = v;
            break;
        }

        nums[i] = nums[v]
        nums[v] = v;
    }

    return r;
};



console.log(findRepeatNumber([3, 4, 2, 1, 1, 0]))