/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        unsigned int maxWater = 0;

        // 2 pointer to move from left and right boundries
        unsigned int left = 0;
        unsigned int right = height.size() - 1;

        while (left != right)
        {
            // caculate the water on each step to see if it's larger than current one
            if (min(height[left], height[right]) * (right - left) > maxWater)
            {
                maxWater = min(height[left], height[right]) * (right - left);
            }

            // always move the pointer which points to the lower one
            if (height[left] > height[right])
            {
                right--;
            }
            else
            {
                left++;
            }
        }

        return maxWater;
    }
};
// @lc code=end
