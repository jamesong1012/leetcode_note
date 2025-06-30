# [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 33  | *Medium*  | `array`, `binary-search` | **bloomberg, facebook, linkedin, microsoft, uber** |

## Problem Description

There is an integer array `nums` sorted in ascending order (with distinct values).

Prior to being passed to your function, `nums` is possibly rotated at an unknown pivot index `k` (`1 <= k < nums.length`) such that the resulting array is `[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]` **(0-indexed)**. For example, `[0,1,2,4,5,6,7]` might be rotated at pivot index `3` and become `[4,5,6,7,0,1,2]`.

Given the array `nums` **after** the possible rotation and an integer `target`, return *the index of* `target` *if it is in* `nums`*, or* `-1` *if it is not in* `nums`.

You must write an algorithm with `O(log n)` runtime complexity.

### Example 1

```text
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
```

### Example 2

```text
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
```

### Example 3

```text
Input: nums = [1], target = 0
Output: -1
```

#### Constraints

- `1 <= nums.length <= 5000`
- -10<sup>4</sup> <= `nums[i]` <= 10<sup>4</sup>
- All values of `nums` are **unique**.
- `nums` is an ascending array that is possibly rotated.
- -10<sup>4</sup> <= `target` <= 10<sup>4</sup>

---

### 2025/06/30

- Using [153. Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/).
- Determine at which range is the target.
- Set the boundary for **binary search**.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(1)  | O(log n)|

##### Time

- First Binary search to find minimum.
- Second Binary search to find target.
- Will be O(2*log n) = `O(log n)`

##### Space

- Fixed variable for searching, `O(1)`.
