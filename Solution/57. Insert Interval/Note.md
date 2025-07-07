# [Insert Interval](https://leetcode.com/problems/insert-interval/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 57  | *Medium*  | `array, sort` | **facebook, google, linkedin** |

## Problem Description

You are given an array of non-overlapping intervals `intervals` where `intervals[i] = [starti, endi]` represent the start and the end of the <code>i<sup>th</sup></code> interval and `intervals` is sorted in ascending order by <code>start<sub>i</sub></code>. You are also given an interval `newInterval = [start, end]` that represents the start and end of another interval.

Insert `newInterval` into `intervals` such that `intervals` is still sorted in ascending order by <code>start<sub>i</sub></code> and `intervals` still does not have any overlapping intervals (merge overlapping intervals if necessary).

Return `intervals` after the insertion.

**Note** that you don't need to modify `intervals` in-place. You can make a new array and return it.

### Example 1

```text
Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
Output: [[1,5],[6,9]]
```

### Example 2

```text
Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
Output: [[1,2],[3,10],[12,16]]
Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].
```

#### Constraints

- <code>0 <= intervals.length <= 10<sup>4</sup></code>
- `intervals[i].length == 2`
- <code>0 <= start<sub>i</sub> <= end<sub>i</sub> <= 10<sup>5</sup></code>
- `intervals` is sorted by <code>start<sub>i</sub></code> in **ascending** order.
- `newInterval.length == 2`
- <code>0 <= start <= end <= 10<sup>5</sup></code>

---

### 2025/07/07

1. First, find the place to insert, which would be the one that *first greater than* new `newInterval`.
2. Check if the **previous one** need to be merged.
3. Check how many intervals after `newInterval` need to be merged.
**Note**: need to check if need to merge when the insertion happen at the end.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(n)  | O(n) |

##### Time

- `O(n)` to check all elements.

##### Space

- `O(n)` for result.
- `O(1)` for temp variable and pointers.
