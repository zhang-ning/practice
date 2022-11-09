/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
  let index = 0;
  const m = {};
  for (const num of nums) {
    if (m[target - num] !== undefined) {
      return [m[target - num], index];
    } else {
      m[num] = index;
    }
    index++;
  }
};

console.log(twoSum([2, 7, 11, 15], 9));
