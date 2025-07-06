/*
 * @lc app=leetcode id=44 lang=cpp
 *
 * [44] Wildcard Matching
 */

// @lc code=start
#include <string>
using namespace std;
class Solution
{
public:
    bool isMatch(string s, string p)
    {
        int curS = 0, curP = 0;
        int lastS = curS;
        int lastStar = -1;
        while (curS < s.size())
        {
            if (s[curS] == p[curP] || p[curP] == '?')
            {
                curS++;
                curP++;
                continue;
            }
            // if found '*', remember the position of current pattern and matching character
            if (p[curP] == '*')
            {
                lastStar = curP;
                lastS = curS;
                curP++;
                continue;
            }
            // if not match, check if there was '*' has been found

            // if not, return false
            // if yes, set the current pattern to the character after '*'
            // and find the matching character in s
            if (lastStar >= 0)
            {
                curP = lastStar + 1;
                lastS++;
                curS = lastS;
                continue;
            }
            return false;
        }

        // after matching, check if only '*' left
        while (curP < p.size())
        {
            if (p[curP] != '*')
            {
                return false;
            }
            curP++;
        }
        return true;
    }
};
// @lc code=end
