# [Rotate Image](https://leetcode.com/problems/rotate-image/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 48  | *Medium*  | `array` | **apple, amazon, microsoft** |

## Problem Description

You are given an `n x n` 2D `matrix` representing an image, rotate the image by **90** degrees (clockwise).

You have to rotate the image <span style="color:Aqua">in-place</span>., which means you have to modify the input 2D matrix directly. **DO NOT** allocate another 2D matrix and do the rotation.

### Example 1

![Example 1](https://assets.leetcode.com/uploads/2020/08/28/mat1.jpg)

```text
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
```

### Example 2

![Example 2](https://assets.leetcode.com/uploads/2020/08/28/mat2.jpg)

```text
Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
```

#### Constraints

- `n == matrix.length == matrix[i].length`
- `1 <= n <= 20`
- `-1000 <= matrix[i][j] <= 1000`

---

### 2025/06/14

Rotate the matrix, need to caculate the next position and store remember it for the next round.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(1)  | O(n)|

##### Time

- Need to check every element in matrix for rotation, which will be `O(n)`.

##### Space

- In-place, O(1).
