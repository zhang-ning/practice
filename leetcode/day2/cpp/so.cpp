#include "so.h"

int Solution::countConsistentStrings(std::string allowed, std::vector<std::string> &words)
{

	unsigned int length = 0;
	for (std::string &word : words)
	{

		bool notok = false;
		for (size_t i = 0; i < word.length(); i++)
		{
			/* code */
			std::string c = word.substr(i, 1);
			if (allowed.find(c) == std::string::npos)
			{
				notok = true;
				break;
			}
		}

		if (!notok)
		{
			length++;
		}
	}

	return length;
}