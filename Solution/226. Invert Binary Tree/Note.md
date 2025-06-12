# [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 226  | *Easy*  | `tree` | **Unknown** |

## Problem Description

Given the `root` of a binary tree, invert the tree, and return *its root*.

### Example 1

```text
Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]
```

### Example 2

```text
Input: root = [2,1,3]
Output: [2,3,1]
```

### Example 3

```text
Input: root = []
Output: []
```

#### Constraints

- The number of nodes in the tree is in the range `[0, 100]`.
- `-100 <= Node.val <= 100`

---

### 2025/06/12

Swap the `left` and `right` node starting from the `root`.

- **Notice:** The longest string would be the `most + k`.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(n)  | O(n)|

##### Time

- Only need to traverse each node 1 times, which is `O(n)`.

##### Space

- Need to recursively traverse the node, which is `O(n)` by add function in stack.
