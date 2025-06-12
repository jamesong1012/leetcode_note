# [Word Break](https://leetcode.com/problems/word-break/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 139  | *Medium*  | `dynamic-programming` | **amazon, bloomberg, facebook, google, pocketgems, uber, yahoo** |

## Problem Description

Given a string `s` and a dictionary of strings `wordDict`, return `true` if `s` can be segmented into a space-separated sequence of one or more dictionary words.

**Note** that the same word in the dictionary may be reused multiple times in the segmentation.

### Example 1

```text
Input: s = "leetcode", wordDict = ["leet","code"]
Output: true
Explanation: Return true because "leetcode" can be segmented as "leet code".
```

### Example 2

```text
Input: s = "applepenapple", wordDict = ["apple","pen"]
Output: true
Explanation: Return true because "applepenapple" can be segmented as "apple pen apple".
Note that you are allowed to reuse a dictionary word.
```

### Example 3

```text
Input: s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]
Output: false
```

#### Constraints

- `1 <= s.length <= 300`
- `1 <= wordDict.length <= 1000`
- `1 <= wordDict[i].length <= 20`
- `s` and `wordDict[i]` consist of only lowercase English letters.
- All the strings of `wordDict` are unique.

---

### 2025/06/12

Using a `dp[]` array to store `bool` value, which the `dp[i]` represent the `[0, i)` has a **valid word** in `wordDict`.  
Then we skip the position that doesn't have a valid word by `dp[j] == false`.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(n)  | O(n<sup>2</sup>)|

##### Time

- There are 2 for loops, which is O(n<sup>2</sup>).

##### Space

- We need the same size of `dp[]` array as `s` to keep the result, which is `O(n)`.
