/*
 * @lc app=leetcode id=424 lang=cpp
 *
 * [424] Longest Repeating Character Replacement
 */

// @lc code=start
#include <vector>
#include <string>

int LetterIndex(char letter) // the index of upper case english letter
{
    return int(letter) - 65; // 65 is the ASCII decimal number of 'A'
}

using namespace std;
class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        vector<int> vecLetterInWindow(26, 0); // 26 for 26 english letter, record how many of each letter in current window

        int iMax = 1;
        int iMostCharCount = 1;

        vecLetterInWindow[LetterIndex(s[0])]++;
        for (int i = 0, j = 0; i < s.size();)
        {
            if ((i - j + 1) - iMostCharCount > k)
            {
                vecLetterInWindow[LetterIndex(s[j])]--;
                j++;
            }

            if (i - j + 1 > iMax && i < s.size())
            {
                iMax = i - j + 1;
            }

            i++;
            if (i < s.size())
            {
                vecLetterInWindow[LetterIndex(s[i])]++;
                if (vecLetterInWindow[LetterIndex(s[i])] > iMostCharCount)
                {
                    iMostCharCount = vecLetterInWindow[LetterIndex(s[i])];
                }
            }
        }

        return iMax;
    }
};
// @lc code=end
