# [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 128  | *Medium*  | `string`, `stack` | **facebook, google** |

## Problem Description

Given an unsorted array of integers `nums`, return *the length of the longest consecutive elements sequence*.

You must write an algorithm that runs in `O(n)` time.

```text
Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
```

```text
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
```

```text
Example 3:

Input: nums = [1,0,1,2]
Output: 3
```

### Constraints

- 0 <= nums.length <= 10<sup>5</sup>  
- -10<sup>9</sup> <= nums[i] <= 10<sup>9</sup>

---

### 2025/05/31

Using **unordered_set(hash)** to find the LCS.  
Hash can access the element in `O(1)`.  
Starting from picking the first number and expand `next` and `previous` to find how long the sequence currently is.  
Remove the number is the table once it's checked to **avoid from double checking** until all the elements in the table have been checked.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(n)  | O(n)|

##### Time

- Whole input needed to be checked.

##### Space

- Construct the hash table depends on how big is the input, so it's `O(n)`
