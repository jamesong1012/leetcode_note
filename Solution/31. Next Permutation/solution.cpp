/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int iNeedIncreasePos = -1; // the position that need to increase
        int iNextIncreaseNum;      // the position of next number to increase

        for (int i = nums.size() - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                iNeedIncreasePos = i;
                break;
            }
        }
        if (iNeedIncreasePos == -1) // the last permutation
        {
            partial_sort(nums.begin(), nums.begin() + nums.size() - 1, nums.end());
            return;
        }
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] > nums[iNeedIncreasePos])
            {
                iNextIncreaseNum = i;
                break;
            }
        }

        // swap value
        int temp = nums[iNeedIncreasePos];
        nums[iNeedIncreasePos] = nums[iNextIncreaseNum];
        nums[iNextIncreaseNum] = temp;

        partial_sort(nums.begin() + iNeedIncreasePos + 1, nums.begin() + nums.size() - 1, nums.end());
    }
};
// @lc code=end