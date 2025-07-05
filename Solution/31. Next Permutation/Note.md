# [Next Permutation](https://leetcode.com/problems/next-permutation/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 31  | *Medium*  | `Array` | **google** |

## Problem Description

A **permutation** of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for `arr = [1,2,3]`, the following are all the permutations of `arr`: `[1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1]`.
The **next permutation** of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the **next permutation** of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

- For example, the next permutation of `arr = [1,2,3]` is `[1,3,2]`.
- Similarly, the next permutation of `arr = [2,3,1]` is `[3,1,2]`.
- While the next permutation of `arr = [3,2,1]` is `[1,2,3]` because `[3,2,1]` does not have a lexicographical larger rearrangement.
Given an array of integers `nums`, *find the next permutation of* `nums`.

The replacement must be **[in place](http://en.wikipedia.org/wiki/In-place_algorithm)** and use only constant extra memory.

### Example 1

```text
Input: nums = [1,2,3]
Output: [1,3,2]
```

### Example 2

```text
Input: nums = [3,2,1]
Output: [1,2,3]
```

### Example 3

```text
Input: nums = [1,1,5]
Output: [1,5,1]
```

#### Constraints

- `1 <= nums.length <= 100`
- `0 <= nums[i] <= 100`

---

### 2025/07/02

We need to find the **position that need to increase** and **the next number for that position**.

- Start from `nums.size()-2` of the list, find the one that `i` is smaller than `i+1`.
- After found the `i`, start from `nums.size()-1` to find the first one that is bigger than `nums[i]`.
- *Swap the value above* and sort the element after `i`

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(1)  | O(nlog n)|

##### Time

- `O(n)` for finding the 2 element.
- `O(log n)` for sorting.
- Will be `O(nlog n)`.

##### Space

- `O(1)` for fixed size variable.
