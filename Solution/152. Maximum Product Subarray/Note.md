# [Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 152  | *Medium*  | `array`, `dynamic-programming` | **linkedin** |

## Problem Description

Given an integer array `nums`, find a subarray that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a **32-bit** integer.

### Example 1

```text
Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
```

### Example 2

```text
Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
```

#### Constraints

- 1 <= `nums.length` <= 2 * 10<sup>4</sup>
- `-10 <= nums[i] <= 10`
- The product of any subarray of `nums` is **guaranteed** to fit in a **32-bit** integer.

---

### 2025/06/21

Since the **negative number** would be either **even** or **odd**.

- If it's **even**, the subarray would contain the even negative number.
- If it's **odd**, the negative number would divide the array, and the `max` must fall into one of the subarrays.

If we caculate the product from *left to right* and from *right to left*, definitely could get the `max` product.  
**Note**: reset the product when meets the `0`.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(1)  | O(n)|

##### Time

- Need to check every element 2 times, *left to right* and *right to left*, would be `O(n)`

##### Space

- Fixed variable for caculation, `O(1)`.
