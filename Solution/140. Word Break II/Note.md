# [Word Break II](https://leetcode.com/problems/word-break-ii/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 140  | *Hard*  | `dynamic-programming`, `backtracking` | **dropbox, google, snapchat, twitter, uber** |

## Problem Description

Given a string `s` and a dictionary of strings `wordDict`, add spaces in `s` to construct a sentence where each word is a valid dictionary word. Return all such possible sentences in **any order**.

**Note** that the same word in the dictionary may be reused multiple times in the segmentation.

### Example 1

```text
Input: s = "catsanddog", wordDict = ["cat","cats","and","sand","dog"]
Output: ["cats and dog","cat sand dog"]
```

### Example 2

```text
Input: s = "pineapplepenapple", wordDict = ["apple","pen","applepen","pine","pineapple"]
Output: ["pine apple pen apple","pineapple pen apple","pine applepen apple"]
Explanation: Note that you are allowed to reuse a dictionary word.
```

### Example 3

```text
Input: s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]
Output: []
```

#### Constraints

- `1 <= s.length <= 20`
- `1 <= wordDict.length <= 1000`
- `1 <= wordDict[i].length <= 10`
- `s` and `wordDict[i]` consist of only lowercase English letters.
- All the strings of `wordDict` are **unique**.
- Input is generated in a way that the length of the answer doesn't exceed 10<sup>5</sup>.

---

### 2025/07/12

- When found a word, *pass the rest of string to next recursion*.  
- When reach the end of string, push the `sentence`.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(n)  | O(2<sup>n</sup> * n)|

##### Time

- Each character can be a start of a new word, and for each valid sentence, joining words takes O(n), which will be <code>O(2<sup>n</sup> * n)</code>

##### Space

- `O(n)` for temp sentences and function stack.
