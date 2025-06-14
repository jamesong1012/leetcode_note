/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int dim = matrix.size();
        for (int i = 0; i < dim / 2; i++)
        {
            for (int j = i; j < dim - 1 - i; j++)
            {
                int tempNext, tempPrev; // to keep the value for the next and previous

                tempPrev = matrix[j][(dim - 1 - i)];
                matrix[j][(dim - 1 - i)] = matrix[i][j];

                tempNext = matrix[dim - 1 - i][dim - 1 - j];
                matrix[dim - 1 - i][dim - 1 - j] = tempPrev;

                tempPrev = matrix[(dim - 1 - j)][i];
                matrix[(dim - 1 - j)][i] = tempNext;

                matrix[i][j] = tempPrev;
            }
        }
    }
};
// @lc code=end
