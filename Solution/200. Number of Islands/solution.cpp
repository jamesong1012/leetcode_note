/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution
{
public:
    bool isChecked(char ch)
    {
        return ch == 'c';
    }
    bool isIsland(char ch)
    {
        return ch == '1';
    }
    void traverseIsland(vector<vector<char>> &grid, int i, int j)
    {
        // DFS
        grid[i][j] = 'c'; // marked as checked

        // top
        if (i > 0)
        {
            if (isIsland(grid[i - 1][j]))
            {
                traverseIsland(grid, i - 1, j);
            }
        }
        // bottom
        if (i < grid.size() - 1)
        {
            if (isIsland(grid[i + 1][j]))
            {
                traverseIsland(grid, i + 1, j);
            }
        }
        // left
        if (j > 0)
        {
            if (isIsland(grid[i][j - 1]))
            {
                traverseIsland(grid, i, j - 1);
            }
        }
        // right
        if (j < grid[i].size() - 1)
        {
            if (isIsland(grid[i][j + 1]))
            {
                traverseIsland(grid, i, j + 1);
            }
        }
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int Islands = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (isChecked(grid[i][j]))
                {
                    continue;
                }

                if (isIsland(grid[i][j]))
                {
                    traverseIsland(grid, i, j);
                    Islands++;
                }
            }
        }

        return Islands;
    }
};
// @lc code=end
