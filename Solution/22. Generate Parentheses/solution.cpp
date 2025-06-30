/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
#include <vector>
#include <string>
using namespace std;
class Solution
{
private:
    vector<string> result;

public:
    vector<string> generateParenthesis(int n)
    {
        string tempComb;
        tempComb.reserve((n * 2) + 1);
        backtrace(n, n, tempComb);
        return result;
    }

    void backtrace(int numLeftBracket, int numRightBracket, string curComb)
    {
        if (numLeftBracket == 0 && numRightBracket == 0) // no bracket left
        {
            result.push_back(curComb);
            return;
        }

        if (numLeftBracket > 0)
        {
            backtrace(numLeftBracket - 1, numRightBracket, curComb + '(');
        }
        if (numLeftBracket < numRightBracket)
        {
            backtrace(numLeftBracket, numRightBracket - 1, curComb + ')');
        }
    }
};
// @lc code=end
