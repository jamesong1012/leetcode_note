/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> result;
        int height = matrix.size();
        int width = matrix[0].size();
        result.reserve((height * width) + 1);
        int iTotalNum = height * width; // to indicate if all element has been checked

        int iCurrentLoop = 0;
        while (1)
        {
            for (int i = 0 + iCurrentLoop; i < width - iCurrentLoop; i++) // top side
            {
                result.emplace_back(matrix[0 + iCurrentLoop][i]);
            }
            if (result.size() == iTotalNum)
                break;

            for (int i = 0 + iCurrentLoop + 1; i < height - iCurrentLoop; i++) // right side
            {
                result.emplace_back(matrix[i][width - 1 - iCurrentLoop]);
            }
            if (result.size() == iTotalNum)
                break;

            for (int i = width - 2 - iCurrentLoop; i >= 0 + iCurrentLoop; i--) // bottom side
            {
                result.emplace_back(matrix[height - 1 - iCurrentLoop][i]);
            }
            if (result.size() == iTotalNum)
                break;

            for (int i = height - 2 - iCurrentLoop; i >= 0 + iCurrentLoop + 1; i--) // left side
            {
                result.emplace_back(matrix[i][0 + iCurrentLoop]);
            }
            if (result.size() == iTotalNum)
                break;

            iCurrentLoop++;
        }

        return result;
    }
};
// @lc code=end
