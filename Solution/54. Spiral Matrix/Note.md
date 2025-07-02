# [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 54  | *Medium*  | `Array` | **google, microsoft, uber** |

## Problem Description

Given an `m x n` `matrix`, *return all elements of the* `matrix` *in spiral order*.

### Example 1

![Example 1](https://assets.leetcode.com/uploads/2020/11/13/spiral1.jpg)

```text
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
```

### Example 2

![Example 2](https://assets.leetcode.com/uploads/2020/11/13/spiral.jpg)

```text
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
```

#### Constraints

- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 10`
- `-100 <= matrix[i][j] <= 100`

---

### 2025/07/02

*Start from the most outside* and **break the while loop** once the `result.size() = total element`.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(1)  | O(n)|

##### Time

- `O(n)` for traverse every elements once.

##### Space

- `O(1)` for fixed size variable.
