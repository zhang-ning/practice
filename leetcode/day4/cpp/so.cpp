#include "so.h"
#include <string>
#include <algorithm>

bool Solution::isPalindrome(int x)
{
	string m = std::to_string(x);
	std::reverse(m.begin(), m.end());
	return m == std::to_string(x);
}