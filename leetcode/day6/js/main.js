/**
 * @param {string} s
 * @return {number}
 */
 var lengthOfLongestSubstring = function(s) {
    if(s.length === 0) return 0;

    let left = 0;
    let maxlength = 0;
    let lookup = new Set();

    for (let index = 0; index < s.length; index++) {
        let char = s[index];
        while (lookup.has(char)) {
            lookup.delete(s[left]);
            left++;
        }

        maxlength = Math.max(maxlength, index + 1 - left);
        lookup.add(char);
    }
    return maxlength
};

console.log("the length is: ", lengthOfLongestSubstring("pwwkew"))