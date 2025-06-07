[Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/)
===
| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 647  | *Easy*  | `string`, `dynamic-programming` | **facebook , linkedin** |

Problem Description
---
Given a string `s`, return _the number of_ ___palindromic substrings___ _in it_.

A string is a __palindrome__ when it reads the same backward as forward.

A __substring__ is a contiguous sequence of characters within the string.




#### Example 1:
```
Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
```
#### Example 2:
```
Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
```

#### Constraints:

- `1 <= s.length <= 1000`.  
- `s` consists of lowercase English letters.

---
### 2025/06/07
_Traverse the whole string and expand_ the __possible combination__ of palindrome on each position.  
ex. `"..aa..."`, where `"aa"` should be __3__ comb, first `"a"`, second `"a"`, `"aa"`. But in this solution, only count __2__ because the first `"a"` would be counted when _in the last round_.
#### Complexity Analysis
| Space Complexity | Time Complexity | 
| :--: | :--: |
| O(1)  | O(n<sup>2</sup>)|

##### Time
- Need to expand the possible combination on each position, so it's __O(n<sup>2</sup>)__.

##### Space
- Only move the pointers on the original string.