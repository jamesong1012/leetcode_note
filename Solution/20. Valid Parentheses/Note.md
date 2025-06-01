[Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
===
| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 20  | *Easy*  | `string`, `stack` | **airbnb, amazon, bloomberg, facebook, google, microsoft, twitter, zenefits** |

Problem Description
---
Given a string s containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.
#### Constraints:

- `1 <= s.length <= 104`  
- `s` consists of parentheses only `'()[]{}'`.

---
### 2025/05/30
Using __Stack__, keep pushing elements from input, when meet the close one, check if the __top__ is the correspoding open one. If not, directly return `false`.
#### Complexity Analysis
| Space Complexity | Time Complexity | 
| :--: | :--: |
| O(n)  | O(n)|

##### Time
- Every character needed to be checked.

##### Space
- As using stack, the worst case might be the whole input string.