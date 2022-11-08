
#include "so.h"
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char **argv)
{
	Solution s{};

	// std::string allowed = "ab";
	// std::vector<string> words = {"ad",
	// 			     "bd",
	// 			     "aaab",
	// 			     "baa",
	// 			     "badab"};

	std::string allowed = "cad";
	std::vector<string> words = {"cc", "acd", "b", "ba", "bac", "bad", "ac", "d"};

	std::cout << s.countConsistentStrings(allowed, words) << std::endl;
	return 0;
}
