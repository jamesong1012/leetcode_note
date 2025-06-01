/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <string>
#include <stack>

class Solution
{
public:
    bool isValid(std::string s)
    {
        std::stack<char> stack;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ')')
            {
                if (stack.size() == 0 || stack.top() != '(')
                {
                    return false;
                }
                stack.pop();
            }
            else if (s[i] == '}')
            {
                if (stack.size() == 0 || stack.top() != '{')
                {
                    return false;
                }
                stack.pop();
            }
            else if (s[i] == ']')
            {
                if (stack.size() == 0 || stack.top() != '[')
                {
                    return false;
                }
                stack.pop();
            }
            else
            {
                stack.push(s[i]);
            }
        }
        if (stack.size() > 0)
            return false;
        return true;
    }
};
// @lc code=end
