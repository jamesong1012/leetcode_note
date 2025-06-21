/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */

// @lc code=start
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int max = INT_MIN;
        int cur = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            cur = cur * nums[i];

            if (cur > max)
            {
                max = cur;
            }
            if (nums[i] == 0)
            {
                cur = 1;
            }
        }
        cur = 1;

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            cur = cur * nums[i];

            if (cur > max)
            {
                max = cur;
            }
            if (nums[i] == 0)
            {
                cur = 1;
            }
        }

        return max;
    }
};
// @lc code=end
