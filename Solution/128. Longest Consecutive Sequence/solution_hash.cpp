/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
#include <unordered_set>
class Solution
{
public:
    int longestConsecutive(std::vector<int> &nums)
    {
        if (nums.empty())
            return 0;

        std::unordered_set<int> hNums(nums.begin(), nums.end()); // construct hash for input

        int maxLCS = 0;
        int next, prev; // to find the max and the min of the chosen [nums]

        for (int i = 0; i < nums.size(); i++)
        {
            if (hNums.count(nums[i]) != 0)
            {
                hNums.erase(nums[i]); // erase the element that have been checked

                next = nums[i] + 1;
                prev = nums[i] - 1;

                // find the max
                while (hNums.count(next) != 0)
                {
                    hNums.erase(next);
                    next++;
                }
                // find the min
                while (hNums.count(prev) != 0)
                {
                    hNums.erase(prev);
                    prev--;
                }

                // normally the sequence should be [next - prev + 1],
                // but when the while loops above stop, they have added one more,
                // need to minus 1
                // ex. 3~5 should be 5 - 3 + 1 = 3
                if (next - prev - 1 > maxLCS)
                    maxLCS = next - prev - 1;
            }
        }
        return maxLCS;
    }
};
// @lc code=end
