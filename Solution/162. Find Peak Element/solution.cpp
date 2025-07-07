/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return 0;
        }
        if (nums.size() == 2)
        {
            return nums[0] > nums[1] ? 0 : 1;
        }
        int left = 0;
        int right = nums.size() - 1;
        int mid;
        bool bSlope; // true: positive, false: negative
        //  binary search for target
        while (left <= right)
        {

            mid = (left + right) / 2;
            // cout << mid;
            if ((mid == 0 && nums[mid] > nums[mid + 1]) || (mid == nums.size() - 1 && nums[mid] > nums[mid - 1]) // reach the border
                || (mid > 0 && mid < nums.size() - 1 && nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])) // find the peak
            {
                return mid;
            }

            if ((mid > 0 && mid < nums.size() - 1 && nums[mid] > nums[mid - 1] && nums[mid] < nums[mid + 1])         // aside from border
                || (mid == 0 && nums[mid] < nums[mid + 1]) || (mid == nums.size() - 1 && nums[mid] < nums[mid - 1])) // for border case
            {

                bSlope = true;
            }
            else
            {

                bSlope = false;
            }

            if (bSlope)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return mid;
    }
};
// @lc code=end
