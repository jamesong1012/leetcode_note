# [Wildcard Matching](https://leetcode.com/problems/wildcard-matching/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 44  | *Hard*  | `string, dynamic-programming, backtracking, greedy` | **facebook, google, snapchat, twitter, twosigma** |

## Problem Description

Given an input string (`s`) and a pattern (`p`), implement wildcard pattern matching with support for `'?'` and `'*'` where:

- `'?'` Matches any single character.
- `'*'` Matches any sequence of characters (including the empty sequence).
  
The matching should cover the **entire** input string (not partial).

### Example 1

```text
Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".
```

### Example 2

```text
Input: s = "aa", p = "*"
Output: true
Explanation: '*' matches any sequence.
```

### Example 3

```text
Input: s = "cb", p = "?a"
Output: false
Explanation: '?' matches 'c', but the second letter is 'a', which does not match 'b'.
```

#### Constraints

- `0 <= s.length, p.length <= 2000`
- `s` contains only lowercase English letters.
- `p` contains only lowercase English letters, `'?'` or `'*'`.

---

### 2025/07/06

- `'*'` can match multiple characters.
- when mismatch, check if there was `'*'` has been found
  - if yes, set the current pattern to the **character** after `'*'`, and find the matching character in `s`.
  - if no, that means mismatch, return **false**.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(1)  | O(nm)|

##### Time

- `O(nm)` for worst case.

``` text
Worst case example:

input: bbbbbbbbbbbb
pattern: *bbbb
```

##### Space

- `O(1)` for fixed number of pointers.
