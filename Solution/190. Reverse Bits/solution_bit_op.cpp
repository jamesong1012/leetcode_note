/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t result = 0;

        for (int i = 0; i < 32; i++)
        {
            if (n % 2 == 1)
            {
                result++;
            }

            if (i < 31)
            {
                result = result << 1;
                n = n >> 1;
            }
        }
        return result;
    }
};
// @lc code=end
