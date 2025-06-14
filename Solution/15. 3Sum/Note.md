# [3Sum](https://leetcode.com/problems/3sum/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 15  | *Medium*  | `two-pointers`, `array` | **adobe, amazon, bloomberg, facebook, microsoft** |

## Problem Description

Given an integer array nums, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and`nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

### Example 1

```text
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
```

### Example 2

```text
Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
```

### Example 3

```text
Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
```

#### Constraints

- `3 <= nums.length <= 3000`
- -10<sup>5</sup> <= `nums[i]` <= 10<sup>5</sup>

---

### 2025/06/14

Fix one element `i` and use the other **2 pointers** `j`, `k` to find the combination that `nums[j] + nums[k] = nums[i] * -1`.  
Whenever move the pointer, *skip the element that is same as the previous one* to avoid identical triplet.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(n)  | O(n<sup>2</sup>)|

##### Time

- Sorting the list using std library, which will be `O(log(n))`.
- Using 2 pointers to find the triplet each time is `O(n)`, and need to run this process through almost all element, also need `O(n)`, which is O(n<sup>2</sup>).

**Total** will be O(n<sup>2</sup>) + O(log(n)) = O(n<sup>2</sup>)

##### Space

- Need to **store the result** and some *fixed pointer* and *variable*, which will be `O(n)`.
