[Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
===
| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 3  | *Medium*  | `hash-table`, `two-pointers`, `string`, `sliding-window`  | **adobe, amazon, bloomberg, yelp** |

Problem Description
---
Given a string `s`, find the length of the __longest substring__ without duplicate characters.
```
Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
```
```
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
```
```
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
```

#### Constraints:

- 0 <= s.length <= 5 * 10<sup>4</sup>  
- `s` consists of English letters, digits, symbols and spaces.

---
### 2025/06/01
Using __unordered_map(hash)__ to find the Longest Substring.  
Check all character in the string, insert the __pair(char, position)__ into map if the char hasn't existed. Also, using a __pointer__ to keep the head of current substring.   
Once __found a repeating char__, caculate and compare current substring with the longest, if bigger, update it. And also update the head of current substring to __one step ahead of previous position of repeating char__.
#### Complexity Analysis
| Space Complexity | Time Complexity | 
| :--: | :--: |
| O(n)  | O(n)|

##### Time
- Whole input string needed to be checked.
- Hash map can access the element in average `O(1)`, worst case `O(n)`.  

##### Space
- Construct the hash map table may need to insert all char from the input string, so it's `O(n)`