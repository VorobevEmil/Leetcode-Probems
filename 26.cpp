#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = 0;
        int currentNum = -1;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (nums[i] != currentNum)
            {
                currentNum = nums[i];
                nums[k] = currentNum;
                k++;
            }
        }

        return k;
    }
};