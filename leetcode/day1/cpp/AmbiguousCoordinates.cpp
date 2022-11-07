
#include <string>
#include <vector>
#include "AmbiguousCoordinates.h"

std::vector<std::string> Solution::getPos(std::string s)
{
	std::vector<std::string> pos;
	if (s[0] != '0' || s == "0")
		pos.push_back(s);
	for (int p = 1; p < s.size(); ++p)
	{
		if ((p != 1 && s[0] == '0') || s.back() == '0')
			continue;
		pos.push_back(s.substr(0, p) + "." + s.substr(p));
	}
	return pos;
}
std::vector<std::string> Solution::ambiguousCoordinates(std::string s)
{
	int n = s.size() - 2;
	std::vector<std::string> res;
	s = s.substr(1, s.size() - 2);
	for (int l = 1; l < n; ++l)
	{
		std::vector<std::string> lt = getPos(s.substr(0, l));
		if (lt.empty())
			continue;
		std::vector<std::string> rt = getPos(s.substr(l));
		if (rt.empty())
			continue;
		for (auto &i : lt)
		{
			for (auto &j : rt)
			{
				res.push_back("(" + i + ", " + j + ")");
			}
		}
	}
	return res;
};

// 作者：LeetCode-Solution
// 链接：https://leetcode.cn/problems/ambiguous-coordinates/solution/mo-hu-zuo-biao-by-leetcode-solution-y1yz/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。