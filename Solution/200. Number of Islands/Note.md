# [Number of Islands](https://leetcode.com/problems/number-of-islands/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 200  | *Medium*  | `depth-first-search`, `breadth-first-search`, `union-find` | **amazon, facebook, google, microsoft, zenefits** |

## Problem Description

Given an `m x n` 2D binary grid `grid` which represents a map of `'1'`s (land) and `'0'`s (water), return *the number of islands*.

An **island** is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

### Example 1

```text
Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1
```

### Example 2

```text
Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3
```

#### Constraints

- `m == grid.length`
- `n == grid[i].length`
- `1 <= m, n <= 300`
- `grid[i][j]` is `'0'` or `'1'`.

---

### 2025/07/10

Once reach island, **BFS** to traverse the whole island and mark the checked position as `'c'`, and increment the `result`.  
After **iterating over the whole grid**, we get the number of the islands.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(n)  | O(n)|

##### Time

- Visit each node once, so it's `O(n)` which `n = elements` in grid.

##### Space

- Mark **in-place** on original grid, only **function stack space** needed, it's `O(n)`, which `n` is the *area of a island*.
