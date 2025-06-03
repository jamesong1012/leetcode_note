[Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)
===
| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 5  | *Medium*  | `dynamic-programming` | **amazon, bloomberg, microsoft** |

Problem Description
---
Given a string `s`, return _the longest palindromic substring_ in `s`.


#### Example 1:
```
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
```
#### Example 2:
```
Input: s = "cbbd"
Output: "bb"
```

#### Constraints:

- `1 <= s.length <= 1000`
- `s` consist of only digits and English letters.

---
### 2025/06/03
Using __DP__, starting _left_ and _right_ boundries depend on the __palindrome__ is _odd_ or _even_, expanding the left and right boundries.  
When meeting the the condition which left and right is __not the same char__, caculate the current length, and if longer than max, replace it and _record the left and right boundries_.  
When found that there is a 3 __consecutive same char__, need to also run a odd checking process.

#### Complexity Analysis
| Space Complexity | Time Complexity | 
| :--: | :--: |
| O(n)  | O(n<sup>2</sup>)|

##### Time
- Whole node needed to be checked

##### Space
- Construct the table `O(n)`, and the function stacks for the recursion `O(n)`.