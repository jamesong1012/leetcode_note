/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include <string>
#include <unordered_map>
class Solution
{
public:
    int lengthOfLongestSubstring(std::string s)
    {
        std::unordered_map<char, int> mapCheckedChar; // record the char in string that has been checked
        int iLongSubstring = 0;
        int iCurSubstringHead = 0;
        for (int i = 0; i < s.size(); i++)
        {
            // when found the existing char, caculate how long is the current substring
            if (mapCheckedChar.count(s[i])) // update the last position of the same char
            {
                if (i - iCurSubstringHead > iLongSubstring) // check if larger than current max
                    iLongSubstring = i - iCurSubstringHead;

                // update the head of current string if the last appearing position of this char is ahead of the current head
                if (mapCheckedChar[s[i]] + 1 > iCurSubstringHead) // update to one step ahead of the repeated char
                    iCurSubstringHead = mapCheckedChar[s[i]] + 1;
                mapCheckedChar[s[i]] = i;
            }
            else
            {
                mapCheckedChar.insert({s[i], i});
            }
        }
        // need to check if the current substring is the longest after loop finishing
        // ex. string without any repeated char "abcdefgh",
        // which will not match the counting process in the for loop
        if (s.size() - iCurSubstringHead > iLongSubstring)
            iLongSubstring = s.size() - iCurSubstringHead;

        return iLongSubstring;
    }
};
// @lc code=end
