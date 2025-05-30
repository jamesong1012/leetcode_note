/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
#include <string>
#include <vector>
using namespace std;

string LetterOfNumber(const char chNumber)
{
    string letters;
    switch (chNumber)
    {
    case '2':
        letters = "abc";
        break;
    case '3':
        letters = "def";
        break;
    case '4':
        letters = "ghi";
        break;
    case '5':
        letters = "jkl";
        break;
    case '6':
        letters = "mno";
        break;
    case '7':
        letters = "pqrs";
        break;
    case '8':
        letters = "tuv";
        break;
    case '9':
        letters = "wxyz";
        break;
    default:
        break;
    }
    return letters;
}
/*
divide the input string into 2 parts
ex. digits = "234", will be divided into "2", "34" as param to BackTracking()
which means char "2" will later append all combination of "34"
*/
vector<string> BackTracking(const char firstChar, const string restString)
{
    vector<string> vecLetterComb;
    // if size() == 1 means need to start combine 2 arrays of letters of 2 single character
    if (restString.size() == 1)
    {
        // get the letters of 2 numbers
        string strLetterOfFirst, strLetterOfRest;
        strLetterOfFirst = LetterOfNumber(firstChar);
        strLetterOfRest = LetterOfNumber(restString[0]);
        // combine 2 arrays of letters
        for (int i = 0; i < strLetterOfFirst.size(); i++)
        {
            for (int j = 0; j < strLetterOfRest.size(); j++)
            {
                string strTempComb;
                strTempComb.push_back(strLetterOfFirst[i]);
                strTempComb.push_back(strLetterOfRest[j]);
                vecLetterComb.push_back(strTempComb);
                strTempComb.clear();
            }
        }
    }
    else
    {
        // get all combinations of the digits except first one
        vector<string> strTempLetterComb = BackTracking(restString[0], restString.substr(1, restString.size() - 1));
        string strLetterOfFirst = LetterOfNumber(firstChar);
        // combine first char and the rest of digits
        for (int i = 0; i < strLetterOfFirst.size(); i++)
        {
            for (int j = 0; j < strTempLetterComb.size(); j++)
            {
                string strTempComb;
                strTempComb.push_back(strLetterOfFirst[i]);
                strTempComb.append(strTempLetterComb[j]);
                vecLetterComb.push_back(strTempComb);
                strTempComb.clear();
            }
        }
    }
    return vecLetterComb;
}

class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> vecLetterComb;
        if (digits.empty())
        {
            vecLetterComb.clear();
        }
        else if (digits.size() == 1)
        {
            string strLetters = LetterOfNumber(digits[0]);
            string strTempLetter;
            for (int i = 0; i < strLetters.size(); i++)
            {
                strTempLetter = strLetters[i];
                vecLetterComb.push_back(strTempLetter);
            }
        }
        else
        {
            vecLetterComb = BackTracking(digits[0], digits.substr(1, digits.size() - 1));
        }

        return vecLetterComb;
    }
};
// @lc code=end
