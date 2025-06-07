[Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)
===
| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 125  | *Easy*  | `two-pointers`, `string` | **facebook, microsoft, uber, zenefits** |

Problem Description
---
A phrase is a __palindrome__ if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` _if it is a_ ___palindrome___, _or_ `false` _otherwise_.
#### Example 1:
```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
```

#### Example 2:
```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
```

#### Example 3:
```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
```

#### Constraints:

- 1 <= `s.length` <= 2 * 10<sup>5</sup>
- `s` consists only of printable ASCII characters.

---
### 2025/06/07
Set __2 pointers__ start from `left` and `right` boudries, move the pointer if found _non-alphanumeric character_, then verify if the `chars` they point to are _the same_.  
__Need to be careful__ that the pointers move to the start and end, need to check if the `chars` are alphanumeric.
#### Complexity Analysis
| Space Complexity | Time Complexity | 
| :--: | :--: |
| O(1)  | O(n)|

##### Time
- Whole input needed to be checked.

##### Space
- Only move the pointers on the original string.