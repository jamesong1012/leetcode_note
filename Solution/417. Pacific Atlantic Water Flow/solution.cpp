/*
 * @lc app=leetcode id=417 lang=cpp
 *
 * [417] Pacific Atlantic Water Flow
 */

// @lc code=start
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

unordered_map<int, unordered_set<int>> umapFlow;        // store the coordinate that can flow to both seas
bool bCanP, bCanA;                                      // indicate if the current coordinate can reach and Atlantic
unordered_map<int, unordered_set<int>> umapReachedFlat; // check if this cordinate has been reached if the height is equal
int iHeigh, iWidth;

bool dfs(vector<vector<int>> &heights, int i, int j)
{

    // reach a coordinate that can flow to both oceans
    if (umapFlow[i].count(j) > 0)
    {
        return true;
    }

    //   found that this coordinate can reach both oceans
    if (i == 0 || j == 0)
    {
        bCanP = true;
    }
    if (i == iHeigh - 1 || j == iWidth - 1)
    {
        bCanA = true;
    }
    if (bCanP && bCanA)
    {
        return true;
    }

    if (i > 0 && heights[i - 1][j] <= heights[i][j]) // top
    {
        if (heights[i - 1][j] == heights[i][j])
        {
            umapReachedFlat[i].emplace(j);
        }
        if (umapReachedFlat[i - 1].count(j) == 0 && dfs(heights, i - 1, j))
        {
            return true;
        }
    }
    if (i < iHeigh - 1 && heights[i + 1][j] <= heights[i][j]) // bottom
    {
        if (heights[i + 1][j] == heights[i][j])
        {
            umapReachedFlat[i].emplace(j);
        }
        if (umapReachedFlat[i + 1].count(j) == 0 && dfs(heights, i + 1, j))
        {
            return true;
        }
    }
    if (j > 0 && heights[i][j - 1] <= heights[i][j]) // left
    {
        if (heights[i][j - 1] == heights[i][j])
        {
            umapReachedFlat[i].emplace(j);
        }
        if (umapReachedFlat[i].count(j - 1) == 0 && dfs(heights, i, j - 1))
        {
            return true;
        }
    }
    if (j < iWidth - 1 && heights[i][j + 1] <= heights[i][j]) // right
    {
        if (heights[i][j + 1] == heights[i][j])
        {
            umapReachedFlat[i].emplace(j);
        }
        if (umapReachedFlat[i].count(j + 1) == 0 && dfs(heights, i, j + 1))
        {
            return true;
        }
    }
    return false;
}

class Solution
{
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
    {
        vector<vector<int>> result;
        umapFlow.clear();
        iHeigh = heights.size();
        iWidth = heights[0].size();
        for (int i = 0; i < iHeigh; i++)
        {
            for (int j = 0; j < iWidth; j++)
            {
                bCanA = false;
                bCanP = false;
                umapReachedFlat.clear();
                if (dfs(heights, i, j))
                {
                    umapFlow[i].emplace(j);
                    result.push_back(vector<int>{i, j});
                }
            }
        }

        return result;
    }
};
// @lc code=end
