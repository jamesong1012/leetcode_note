# [Same Tree](https://leetcode.com/problems/same-tree/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 100  | *Easy*  | `depth-first-search`, `tree` | **bloomberg** |

## Problem Description

Given the roots of two binary trees `p` and `q`, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

### Example 1

![Example 1](https://assets.leetcode.com/uploads/2020/12/20/ex1.jpg)

```text
Input: p = [1,2,3], q = [1,2,3]
Output: true
```

### Example 2

![Example 2](https://assets.leetcode.com/uploads/2020/12/20/ex2.jpg)

```text
Input: p = [1,2], q = [1,null,2]
Output: false
```

### Example 3

![Example 3](https://assets.leetcode.com/uploads/2020/12/20/ex3.jpg)

```text
Input: p = [1,2,1], q = [1,1,2]
Output: false
```

#### Constraints

- The number of nodes in both trees is in the range `[0, 100]`.
- -10<sup>4</sup> <= `Node.val` <= 10<sup>4</sup>

---

### 2025/06/14

Do recursion on every node to check if there is any different from another tree.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(n)  | O(n)|

##### Time

- Traverse all the node to check if any is not same as another tree, which will be `O(n)`.

##### Space

- Need to do recursion to check every nodes, which will be `O(n)` for function stack space.
