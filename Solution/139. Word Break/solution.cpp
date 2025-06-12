/*
 * @lc app=leetcode id=139 lang=cpp
 *
 * [139] Word Break
 */

// @lc code=start
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool wordBreak(string s, vector<string> &wordDict)
    {
        unordered_set<string> setDict(wordDict.begin(), wordDict.end()); // for searching in O(1)

        vector<bool> dp(s.size() + 1, false); // means if [0, i) has a valid word in dictionary
        dp[0] = true;

        for (int i = 1; i <= s.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (dp[j] && setDict.count(s.substr(j, i - j))) // skip the position that does not even have a valid word
                {
                    dp[i] = true;
                }
            }
        }
        return dp[s.size()];
    }
};
// @lc code=end
