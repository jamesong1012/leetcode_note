/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (mid == nums.size() - 1)
            {
                // corner case
                // there are 2 situations that the mid would reach end of the vector
                if (nums[mid] < nums[0]) // the smallest is at the end
                {
                    return nums[mid];
                }
                else // the smallest is at the first
                {
                    return nums[0];
                }
            }
            else if (mid == 0) // only 2 element that would make mid reach 0
            {
                return nums[1] < nums[0] ? nums[1] : nums[0];
            }

            // compare with previous element, found the smallest
            if (nums[mid] < nums[mid - 1])
            {
                return nums[mid];
            }

            if (nums[mid] < nums[0]) // All the elements to the right of inflection point < first element of the array.
            {
                right = mid - 1;
            }
            else if (nums[mid] > nums[0]) // All the elements to the left of inflection point > first element of the array.
            {
                left = mid + 1;
            }
        }
        return -1;
    }
};
// @lc code=end
