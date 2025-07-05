/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> i, vector<int> j)
{
    return i[0] < j[0];
}
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        int start = 0; // the start index of the interval
        int end = 0;   // the start index of the interval
        vector<vector<int>> result;
        sort(intervals.begin(), intervals.end()); // if using self-define compare function cost more runtime and memory usage
        while (end < intervals.size())
        {
            if (intervals[start][1] >= intervals[end][0])
            {
                intervals[start][1] = intervals[end][1] > intervals[start][1] ? intervals[end][1] : intervals[start][1];
                end++;
            }
            else
            {
                result.push_back(intervals[start]);
                start = end;
            }

            if (end == intervals.size()) // reach the end
            {
                result.push_back(intervals[start]);
            }
        }
        return result;
    }
};
// @lc code=end
