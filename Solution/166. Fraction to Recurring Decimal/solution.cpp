/*
 * @lc app=leetcode id=166 lang=cpp
 *
 * [166] Fraction to Recurring Decimal
 */

// @lc code=start
#include <string>
#include <unordered_map>
#include <cmath>
using namespace std;
class Solution
{
public:
    string fractionToDecimal(int numerator, int denominator)
    {
        if (numerator == 0)
        {
            return "0";
        }
        string result;
        long long llNumerator = llabs(numerator);
        long long llDenominator = llabs(denominator);
        if ((numerator < 0) ^ (denominator < 0))
        {
            result.append("-");
        }

        long long quotient = llNumerator / llDenominator;
        long long remainder = llNumerator % llDenominator;
        result = result.append(to_string(quotient));
        if (remainder == 0) // that has no fractional part
        {
            return result;
        }
        result.append(".");

        unordered_map<long long, int> fractionMap; // (remainder, it's postion)

        while (remainder != 0)
        {
            remainder *= 10;
            if (fractionMap.count(remainder) > 0)
            {
                result.insert(fractionMap[remainder], "(");
                result.append(")");
                break;
            }
            fractionMap[remainder] = result.size();
            quotient = remainder / llDenominator;
            remainder = remainder % llDenominator;
            result = result.append(to_string(quotient));
        }
        return result;
    }
};
// @lc code=end
