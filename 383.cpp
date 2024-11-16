#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
    map<char, int> dict;
    for (char letter : magazine)
    {
        dict[letter] += 1;
    }

    for (char letter : ransomNote)
    {
        if (--dict[letter] < 0)
        {
            return false;
        }
    }

    return true;
}