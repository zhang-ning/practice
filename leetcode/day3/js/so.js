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

function test() {
  var content =
    '我有这些小技能：\n<a href="weixin://bizmsgmenu?msgmenucontent=休假&msgmenuid=休假">休假</a>\n<a href="weixin://bizmsgmenu?msgmenucontent=报销&msgmenuid=报销">报销</a>\n<a href="weixin://bizmsgmenu?msgmenucontent=开证明&msgmenuid=开证明">开证明</a>\n<a href="weixin://bizmsgmenu?msgmenucontent=加班申请&msgmenuid=加班申请">加班</a>\n<a href="weixin://bizmsgmenu?msgmenucontent=调休&msgmenuid=调休">调休</a>\n<a href="weixin://bizmsgmenu?msgmenucontent=加班登记&msgmenuid=加班登记">登记</a>\n<a href="weixin://bizmsgmenu?msgmenucontent=班车&msgmenuid=班车">班车</a>\n<a href="weixin://bizmsgmenu?msgmenucontent=巴士&msgmenuid=巴士">巴士</a>';
  var options = [];

  const clicklinkreg = /[<]a\s*href=["]weixin[:]\/\/bizmsgmenu[?]msgmenucontent[=]([^&]*)/;
  if (clicklinkreg.test(content)) {
    content = content.replace(
      /[<]a\s*href=["]weixin[:]\/\/bizmsgmenu[?]msgmenucontent[=]([^&]*).*?<\/a>/g,
      (a, b) => {
        options.push({
          title: b,
        });
        return "";
      }
    );
  }

  console.log("content: ", content.trim());
  console.log("options: ", options);
}

// console.log(twoSum([2, 7, 11, 15], 9));
test();
