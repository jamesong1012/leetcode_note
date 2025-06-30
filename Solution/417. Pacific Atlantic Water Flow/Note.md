# [Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 417  | *Medium*  | `depth-first-search`, `breadth-first-search` | **google** |

## Problem Description

There is an `m x n` rectangular island that borders both the **Pacific Ocean** and **Atlantic Ocean**. The **Pacific Ocean** touches the island's left and top edges, and the **Atlantic Ocean** touches the island's right and bottom edges.

The island is partitioned into a grid of square cells. You are given an `m x n` integer matrix `heights` where `heights[r][c]` represents the **height above sea level** of the cell at coordinate `(r, c)`.

The island receives a lot of rain, and the rain water can flow to neighboring cells directly north, south, east, and west if the neighboring cell's height is **less than or equal to** the current cell's height. Water can flow from any cell adjacent to an ocean into the ocean.

Return *a* **2D** *list of grid coordinates* `result` *where* `result[i] = [ri, ci]` *denotes that rain water can flow from cell* `(ri, ci)` *to* ***both*** *the Pacific and Atlantic oceans.*

Example 1:

![Example 1](https://assets.leetcode.com/uploads/2021/06/08/waterflow-grid.jpg)

```text
Input: heights = [[1,2,2,3,5],[3,2,3,4,4],[2,4,5,3,1],[6,7,1,4,5],[5,1,1,2,4]]
Output: [[0,4],[1,3],[1,4],[2,2],[3,0],[3,1],[4,0]]
Explanation: The following cells can flow to the Pacific and Atlantic oceans, as shown below:
[0,4]: [0,4] -> Pacific Ocean 
       [0,4] -> Atlantic Ocean
[1,3]: [1,3] -> [0,3] -> Pacific Ocean 
       [1,3] -> [1,4] -> Atlantic Ocean
[1,4]: [1,4] -> [1,3] -> [0,3] -> Pacific Ocean 
       [1,4] -> Atlantic Ocean
[2,2]: [2,2] -> [1,2] -> [0,2] -> Pacific Ocean 
       [2,2] -> [2,3] -> [2,4] -> Atlantic Ocean
[3,0]: [3,0] -> Pacific Ocean 
       [3,0] -> [4,0] -> Atlantic Ocean
[3,1]: [3,1] -> [3,0] -> Pacific Ocean 
       [3,1] -> [4,1] -> Atlantic Ocean
[4,0]: [4,0] -> Pacific Ocean 
       [4,0] -> Atlantic Ocean
Note that there are other possible paths for these cells to flow to the Pacific and Atlantic oceans.
```

Example 2:

```text
Input: heights = [[1]]
Output: [[0,0]]
Explanation: The water can flow from the only cell to the Pacific and Atlantic oceans.
```

### Constraints

- `m == heights.length`
- `n == heights[r].length`
- `1 <= m, n <= 200`
- 0 <= `heights[r][c]` <= 10<sup>5</sup>

---

### 2025/06/30

Using **DFS** on every grid.  

- **2 global variable** to keep tracking if the current grid can flow to both ocean.
- return `true` once reach the checked grid that has been marked able to reach both ocean.
**Note**: Need to be careful of the situation of **equal grid**, it would *go back and forth if not remembering the checked one*.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(n*m)  | O(n*m)|

##### Time

- `O(n*m)` for each grid expanding.

##### Space

- `O(n*m)` for each function stack.
