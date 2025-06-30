/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        int smallestIndex;
        int mid;

        // find the index of smallest element
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (mid == nums.size() - 1)
            {
                // corner case
                // there are 2 situations that the mid would reach end of the vector
                if (nums[mid] < nums[0]) // the smallest is at the end
                {
                    smallestIndex = mid;
                    break;
                }
                else // the smallest is at the first
                {
                    smallestIndex = 0;
                    break;
                }
            }
            else if (mid == 0) // only 2 element that would make mid reach 0
            {
                nums[1] < nums[0] ? smallestIndex = 1 : smallestIndex = 0;
                break;
            }

            // compare with previous element, found the smallest
            if (nums[mid] < nums[mid - 1])
            {
                smallestIndex = mid;
                break;
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

        // based on the target value, set the searching area
        if (smallestIndex == 0)
        {
            left = 0;
            right = nums.size() - 1;
        }
        else if (target >= nums[smallestIndex] && target <= nums[nums.size() - 1])
        {
            left = smallestIndex;
            right = nums.size() - 1;
        }
        else if (target >= nums[0] && target <= nums[smallestIndex - 1])
        {
            left = 0;
            right = smallestIndex - 1;
        }

        // binary search for target
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
};
// @lc code=end
