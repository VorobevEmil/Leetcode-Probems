#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {

        int lengthOfLastWord = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == ' ' && lengthOfLastWord != 0)
            {
                break;
            }
            if (s[i] != ' ')
            {
                lengthOfLastWord++;
            }
        }

        return lengthOfLastWord;
    }
};