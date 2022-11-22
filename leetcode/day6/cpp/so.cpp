#include "so.h"


int Solution::lengthOfLongestSubstring(std::string s) {
    if (s.size() == 0) return 0;

    int left = 0;
    int maxlength = 0;
    std::unordered_set<char> lookup;

    for (size_t i = 0; i < s.size(); i++)
    {
        /* code */
        while (lookup.find(s[i]) != lookup.end())
        {
            /* code */
            lookup.erase(s[left]);
            left++;
        }

        maxlength = std::max(maxlength, int(i) + 1 - left);
        lookup.insert(s[i]);
    }
    return maxlength;
}