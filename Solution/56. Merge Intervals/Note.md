# [Merge Intervals](https://leetcode.com/problems/merge-intervals/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 56  | *Medium*  | `array, sort` | **bloomberg, facebook, google, linkedin, microsoft, twitter, yelp** |

## Problem Description

Given an array of `intervals` where `intervals[i] = [starti, endi]`, merge all overlapping intervals, and return *an array of the non-overlapping intervals that cover all the intervals in the input*.

### Example 1

```text
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
```

### Example 2

```text
Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
```

#### Constraints

- 1 <= `intervals.length` <= 10<sup>4</sup>
- `intervals[i].length == 2`
- 0 <= start<sub>i</sub> <= end<sub>i</sub> <= 10<sup>4</sup>

---

### 2025/07/05

**Sort** the input list with starting value and *check the intervals one by one to merge overlapping*.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(n)  | O(nlog n)|

##### Time

- `O(n)` for finding the 2 element.
- `O(nlog n)` for sorting.
- Will be `O(nlog n)`.

##### Space

- `O(n)` for result.
