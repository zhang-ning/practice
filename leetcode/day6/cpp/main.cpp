
#include "so.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>


int main(int argc, char **argv) {

    Solution so;

    std::cout << so.lengthOfLongestSubstring("abcdeft") << std::endl;
    std::cout << so.lengthOfLongestSubstring("abcabcwefa") << std::endl;
    std::cout << so.lengthOfLongestSubstring("abcabc") << std::endl;
    std::cout << so.lengthOfLongestSubstring("mmmmm") << std::endl;
    std::cout << so.lengthOfLongestSubstring("pwwkew") << std::endl;
}