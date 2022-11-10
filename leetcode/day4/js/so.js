/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
  return (
    x.toString() ===
    x
      .toString()
      .split("")
      .reverse()
      .join("")
  );
};

console.log(isPalindrome(1111111));
console.log(isPalindrome(12221));
console.log(isPalindrome(128718237));
