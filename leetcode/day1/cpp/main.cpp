
#include "AmbiguousCoordinates.h"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	Solution s{};
	auto list = s.ambiguousCoordinates("(45678)");

	for (auto &item : list)
	{
		std::cout << item << std::endl;
	}

	return 0;
}
