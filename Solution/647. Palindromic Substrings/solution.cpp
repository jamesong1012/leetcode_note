/*
 * @lc app=leetcode id=647 lang=cpp
 *
 * [647] Palindromic Substrings
 */

// @lc code=start
class Solution
{
public:
    int countSubstrings(string s)
    {
        short curLeft, curRight; // the left and right boundry of the current palindromic window
        bool bIsNeedCheckOdd = true;
        unsigned int uiSubstringCount = 0;
        for (int i = 0; i < s.size(); i++)
        {
            bIsNeedCheckOdd = true;        // check odd palindrome on every position
            if (i > 0 && s[i] == s[i - 1]) // case of palindrome is even
            {
                if (i + 1 <= s.size() && s[i] != s[i + 1]) // if the +1 and -1 not the same, we can be sure that odd palindrome is not possible
                {
                    bIsNeedCheckOdd = false;
                    uiSubstringCount++; // if no need to check odd string, need to count current s[i], or it will be counted when checking odd
                }
                curLeft = i - 1;
                curRight = i;
                while (s[curLeft] == s[curRight])
                {
                    uiSubstringCount++;
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
                    uiSubstringCount++;
                    curLeft--;
                    curRight++;
                    if (curLeft < 0 || curRight >= s.size()) // meet the min and max boundry
                    {
                        break;
                    }
                }
            }
        }

        return uiSubstringCount;
    }
};
// @lc code=end
