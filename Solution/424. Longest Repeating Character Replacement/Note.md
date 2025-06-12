# [Reorder List](https://leetcode.com/problems/reorder-list/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 143  | *Medium*  | `two-pointers`, `sliding-window` | **pocketgems** |

## Problem Description

You are given a string `s` and an integer `k`. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most `k` times.

Return *the length of the longest substring containing the same letter you can get after performing the above operations.*

### Example 1

```text
Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.
```

### Example 2

```text
Input: s = "AABABBA", k = 1
Output: 4
Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
There may exists other ways to achieve this answer too.
```

#### Constraints

- 1 <= `s.length` <= 10<sup>5</sup>.
- `s` consists of only uppercase English letters.
- `0 <= k <= s.length`

---

### 2025/06/12

Using a `vector` to keep track of the number of each character and a variable to record the most character in the current window.  
Then expand the window and keep updating the number of the most character.  
Everytime we find the longer window, we use this size to slide.
  
- **Notice:** The longest string would be the `most + k`.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(1)  | O(n)|

##### Time

- Only need to traverse the list 1 times, which is `O(n)`.

##### Space

- Only need *fixed amount of array* to keep track of **26 english letters**, which is `O(1)`.
