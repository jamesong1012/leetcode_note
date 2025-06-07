/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
#include <string>
using namespace std;
bool IsAlphanumeric(char input)
{
    if (input < '0' ||
        (input > '9' && input < 'A') ||
        (input > 'Z' && input < 'a') ||
        input > 'z')
    {
        return false;
    }
    return true;
}

bool IsSameChar(char first, char second)
{
    if (first > '9' && second > '9') // alphabete
    {
        // same char with different case would differ from 32 in ASCII table
        if (first - second == 0 || first - second == 32 || first - second == -32)
        {
            return true;
        }
    }
    else // numeric
    {
        if (first - second == 0)
        {
            return true;
        }
    }

    return false;
}
class Solution
{
public:
    bool isPalindrome(string s)
    {
        if (s.size() == 1)
        {
            return true;
        }
        // using 2 pointers, one for left one for right boundries, to identify if it's panlindrome
        int left = 0;
        int right = s.size() - 1;

        while (left <= right)
        {
            while (!IsAlphanumeric(s[left]))
            {
                left++; // move left until it points to alphanumeric characters
                if (left == s.size() - 1)
                {
                    break;
                }
            }

            while (!IsAlphanumeric(s[right]))
            {
                right--; // move right until it points to alphanumeric characters
                if (right == 0)
                {
                    break;
                }
            }

            if (!IsSameChar(s[left], s[right]) && IsAlphanumeric(s[left]) && IsAlphanumeric(s[right]))
            {
                return false;
            }

            left++;
            right--;
        }
        return true;
    }
};
// @lc code=end
