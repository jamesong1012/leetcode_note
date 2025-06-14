/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int iTarget;
        vector<vector<int>> result;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (i != 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            iTarget = nums[i] * -1;
            int j = i + 1;
            int k = nums.size() - 1;
            if (iTarget > nums[k] + nums[k - 1] || iTarget < nums[i] + nums[i + 1])
            {
                // skip the impossible case
                continue;
            }
            while (j < k)
            {
                if (nums[j] + nums[k] > iTarget)
                {
                    k--;
                    while (nums[k] == nums[k + 1] && k > j + 1)
                    {
                        k--;
                    }
                }
                else if (nums[j] + nums[k] < iTarget)
                {
                    j++;
                    while (nums[j] == nums[j - 1] && j < k - 1)
                    {
                        j++;
                    }
                }
                else
                {
                    result.push_back({nums[i], nums[j], nums[k]});

                    j++;
                    while (nums[j] == nums[j - 1] && j < k - 1)
                    {
                        j++;
                    }
                    k--;
                    while (nums[k] == nums[k + 1] && k > j + 1)
                    {
                        k--;
                    }
                }
            }
        }
        return result;
    }
};
// @lc code=end
