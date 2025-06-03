/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
#include <string>
using namespace std;
class Solution
{
public:
    string longestPalindrome(string s)
    {
        short curLeft, curRight;         // the left and right boundry of the current palindromic window
        short maxLeft = 0, maxRight = 0; // the left and right boundry of the max palindrome
        short maxPalindrome = 1;
        bool bIsNeedCheckOdd = true;
        for (int i = 0; i < s.size(); i++)
        {
            bIsNeedCheckOdd = true;        // check odd palindrome on every position
            if (i > 0 && s[i] == s[i - 1]) // case of palindrome is even
            {
                if (i + 1 <= s.size() && s[i] != s[i + 1]) // if the +1 and -1 not the same, we can be sure that odd palindrome is not possible
                    bIsNeedCheckOdd = false;
                curLeft = i - 1;
                curRight = i;
                while (s[curLeft] == s[curRight])
                {
                    if (curRight - curLeft + 1 > maxPalindrome)
                    {
                        maxLeft = curLeft;
                        maxRight = curRight;
                        maxPalindrome = curRight - curLeft + 1;
                    }
                    curLeft--;
                    curRight++;
                    if (curLeft < 0 || curRight >= s.size()) // meet the min and max boundry
                    {
                        break;
                    }
                }
            }

            if (bIsNeedCheckOdd) // case of palindrome is odd
            {
                curLeft = i;
                curRight = i;
                while (s[curLeft] == s[curRight])
                {
                    if (curRight - curLeft + 1 > maxPalindrome)
                    {
                        maxLeft = curLeft;
                        maxRight = curRight;
                        maxPalindrome = curRight - curLeft + 1;
                    }

                    curLeft--;
                    curRight++;
                    if (curLeft < 0 || curRight >= s.size()) // meet the min and max boundry
                    {
                        break;
                    }
                }
            }
        }
        string result(s, maxLeft, maxRight - maxLeft + 1);
        return result;
    }
};
// @lc code=end
