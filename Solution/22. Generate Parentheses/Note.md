# [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 22  | *Medium*  | `stirng`, `backtracking` | **google, uber, zenefits** |

## Problem Description

Given `n` pairs of parentheses, write a function to *generate all combinations of well-formed parentheses.*

### Example 1

```text
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
```

### Example 2

```text
Input: n = 1
Output: ["()"]
```

#### Constraints

- `1 <= n <= 8`

---

### 2025/06/30

- In each recursion, pick one bracket and expand its possibility recusively.
**Note**: left bracket `(` cannot be more than right bracket `)`.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(2<sup>n</sup>n)  | O(2<sup>n</sup>n)|

##### Time

- Basically every position can be `(` or `)`, so it's 2<sup>n</sup>.
- Then we have `2n` positions.
- Will be O(2<sup>n</sup>n).

##### Space

- O(2<sup>n</sup>n) for each recursion stack.
