/**
 * @param {string} allowed
 * @param {string[]} words
 * @return {number}
 */
var countConsistentStrings = function(allowed, words) {
  let length = 0;
  for (const word of words) {
    let notok = false;
    for (let index = 0; index < word.length; index++) {
      const char = word[index];
      if (allowed.indexOf(char) === -1) {
        notok = true;
        break;
      }
    }

    if (!notok) {
      length++;
    }
  }

  return length;
};

const allowed = "cad";
const words = ["cc", "acd", "b", "ba", "bac", "bad", "ac", "d"];
console.log(countConsistentStrings(allowed, words));
