package pk

import "fmt"

// 我们有一些二维坐标，如 "(1, 3)" 或 "(2, 0.5)"，然后我们移除所有逗号，小数点和空格，得到一个字符串S。返回所有可能的原始字符串到一个列表中。

// 原始的坐标表示法不会存在多余的零，所以不会出现类似于"00", "0.0", "0.00", "1.0", "001", "00.01"或一些其他更小的数来表示坐标。此外，一个小数点前至少存在一个数，所以也不会出现“.1”形式的数字。

// 最后返回的列表可以是任意顺序的。而且注意返回的两个数字中间（逗号之后）都有一个空格

// 来源：力扣（LeetCode）
// 链接：https://leetcode.cn/problems/ambiguous-coordinates
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

// 示例 1:
// 输入: "(123)"
// 输出: ["(1, 23)", "(12, 3)", "(1.2, 3)", "(1, 2.3)"]
// 示例 2:
// 输入: "(00011)"
// 输出:  ["(0.001, 1)", "(0, 0.011)"]
// 解释:
// 0.0, 00, 0001 或 00.01 是不被允许的。
// 示例 3:
// 输入: "(0123)"
// 输出: ["(0, 123)", "(0, 12.3)", "(0, 1.23)", "(0.1, 23)", "(0.1, 2.3)", "(0.12, 3)"]
// 示例 4:
// 输入: "(100)"
// 输出: [(10, 0)]
// 解释:
// 1.0 是不被允许的。
//

// 提示:

// 4 <= S.length <= 12.
// S[0] = "(", S[S.length - 1] = ")", 且字符串 S 中的其他元素都是数字。

// 来源：力扣（LeetCode）
// 链接：https://leetcode.cn/problems/ambiguous-coordinates
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

func getPos(s string) (pos []string) {
	if s[0] != '0' || s == "0" {
		pos = append(pos, s) // 如果符合条件，先把全部扔到结果里去
	}

	// 然后从第二位开始，逐个（对满足条件的结果）添加小数点
	for p := 1; p < len(s); p++ {
		if p != 1 && s[0] == '0' || s[len(s)-1] == '0' {
			continue
		}
		pos = append(pos, s[:p]+"."+s[p:])
	}
	return
}

func AmbiguousCoordinates(s string) (res []string) {
	n := len(s) - 2     // 数字部分的长度
	s = s[1 : len(s)-1] // 截取数字部分的字符串
	for l := 1; l < n; l++ {
		lt := getPos(s[:l]) // 截取左侧部分的字符串
		if len(lt) == 0 {
			continue
		}
		rt := getPos(s[l:]) // 截取右侧部分的字符串
		if len(rt) == 0 {
			continue
		}
		for _, i := range lt {
			fmt.Println("i:", i)
			for _, j := range rt {
				fmt.Println("j: ", j)
				res = append(res, "("+i+", "+j+")")
			}
		}
	}
	return
}

//     作者：LeetCode-Solution
//     链接：https://leetcode.cn/problems/ambiguous-coordinates/solution/mo-hu-zuo-biao-by-leetcode-solution-y1yz/
//     来源：力扣（LeetCode）
//     著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
