/*
 * @lc app=leetcode id=140 lang=cpp
 *
 * [140] Word Break II
 */

// @lc code=start
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
private:
    vector<string> m_result;

    void getSentences(string &s, unordered_set<string> &dict, int start, string sentence)
    {
        for (int i = start + 1; i <= s.size(); i++)
        {
            string tempSubstr = s.substr(start, i - start);
            if (dict.count(tempSubstr))
            {
                string tempSentence(sentence);
                tempSentence.append(tempSubstr);
                if (i != s.size())
                {
                    tempSentence.append(" ");
                    getSentences(s, dict, i, tempSentence);
                }
                else
                {
                    m_result.push_back(tempSentence);
                }
            }
        }
    }

public:
    vector<string> wordBreak(string s, vector<string> &wordDict)
    {
        unordered_set<string> setDict(wordDict.begin(), wordDict.end()); // for searching in O(1)

        vector<string> result;
        string sentence("");

        getSentences(s, setDict, 0, sentence);
        return m_result;
    }
};
// @lc code=end
