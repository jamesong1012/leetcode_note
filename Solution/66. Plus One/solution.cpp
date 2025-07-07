/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int curDigit = digits.size() - 1;
        while (curDigit >= 0)
        {
            digits[curDigit] += 1;
            if (digits[curDigit] == 10)
            {
                digits[curDigit] = 0;
                curDigit--;
                if (curDigit == -1)
                {
                    digits.insert(digits.begin(), 1);
                }
            }
            else
            {
                break;
            }
        }
        return digits;
    }
};
// @lc code=end
