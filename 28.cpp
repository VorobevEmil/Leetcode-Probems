#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        for (int i = 0; i < haystack.length(); i += needle.length())
        {
            if (haystack.substr(i, i + needle.length()) == needle)
            {
                return i;
            }
        }

        return -1;
    }
};