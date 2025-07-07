/*
 * @lc app=leetcode id=57 lang=cpp
 *
 * [57] Insert Interval
 */

// @lc code=start
#include <vector>
using namespace std;
#define INTERVAL_START 0
#define INTERVAL_END 1
class Solution
{
public:
    // find the place that need to insert and check how many intervals need to be merged
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        vector<vector<int>> result;
        bool bInserted = false;
        for (int i = 0; i < intervals.size(); i++)
        {
            if (newInterval[INTERVAL_START] <= intervals[i][INTERVAL_START] && !bInserted)
            {
                bInserted = true;
                vector<int> temp;
                temp.resize(2);
                temp[INTERVAL_START] = newInterval[INTERVAL_START];
                temp[INTERVAL_END] = newInterval[INTERVAL_END];
                if (i > 0)
                {
                    // overlap with previous one, pop it and merge
                    if (newInterval[INTERVAL_START] <= intervals[i - 1][INTERVAL_END])
                    {
                        result.pop_back();
                        temp[INTERVAL_START] = intervals[i - 1][INTERVAL_START];
                        temp[INTERVAL_END] = temp[INTERVAL_END] > intervals[i - 1][INTERVAL_END] ? temp[INTERVAL_END] : intervals[i - 1][INTERVAL_END];
                    }
                }
                // find how many need to be merge after newInterval
                int j = 0;
                while (i + j < intervals.size())
                {
                    if (newInterval[INTERVAL_END] < intervals[i + j][INTERVAL_START])
                    {
                        break;
                    }
                    j++;
                }
                if (j > 0)
                {
                    temp[INTERVAL_END] = temp[INTERVAL_END] > intervals[i + j - 1][INTERVAL_END] ? temp[INTERVAL_END] : intervals[i + j - 1][INTERVAL_END];
                    result.push_back(temp);
                    i = i + j - 1;
                }
                else // j == 0, not merge anyone
                {
                    result.push_back(temp);
                    result.push_back(intervals[i]);
                }
            }
            else
            {
                result.push_back(intervals[i]);
            }

            if (i == intervals.size() - 1 && !bInserted) // insert at the end
            {
                if (newInterval[INTERVAL_START] <= result[i][INTERVAL_END])
                {
                    result[i][INTERVAL_END] = newInterval[INTERVAL_END] > result[i][INTERVAL_END] ? newInterval[INTERVAL_END] : result[i][INTERVAL_END];
                }
                else
                {
                    result.push_back(newInterval);
                }
            }
        }
        if (result.empty())
        {
            result.push_back(newInterval);
        }
        return result;
    }
};
// @lc co+de=end
