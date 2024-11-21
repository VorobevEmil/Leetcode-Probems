#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int low = 0;
        int high = nums.size();
        int mid;

        while (true)
        {
            mid = (low + high) / 2;
            if (nums[mid] == mid)
            {
                return target;
            }
            else if (nums[mid] > target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return -1;
    }
};