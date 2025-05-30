[Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/)
===
| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 17  | *Medium*  | string, backtracking | **amazon, dropbox, facebook, google, uber** |

Problem Description
---
Given a string containing digits from `2-9` inclusive, return all possible letter combinations that the number could represent. Return the answer in __any order__.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.
#### Constraints:

`0 <= digits.length <= 4  `  
`digits[i]` is a digit in the range `['2', '9']`.

---
### 2025/05/30
Using __Recursion__ to divide the input `digits` string into the __first char__ and the __rest except the first one__, and keep dividing the rest string until the rest containing __only one char__.  
When reaching __the end of recursion__, it will combine 2 arrays of letters of 2 numbers and return all the combinations back to the last recursion call. Then it continues to combine the letters of last char with the possible combinations just got.  
#### Example
```
Input: digits = "423" -> "4" + "23"
               ["g","h","i"] + ["ad","ae","af","bd","be","bf","cd","ce","cf"]
```
#### Complexity Analysis (From Perplexity)
| Space Complexity | Time Complexity | 
| :--: | :--: |
| O(n ⋅4<sup>n</sup> )  | O(4<sup>n</sup>⋅n)  |

##### 時間複雜度分析
使用遞迴分治法將輸入字串分解為首字元與剩餘字串。假設輸入字串長度為n，各階段處理行為如下：

1. 遞迴樹深度：
遞迴深度為O(n)，每個遞迴層級處理一個數字字元

2. 分支因子擴張：
每個數字對應3-4個字母（2-9號鍵），最差情況取最大分支因子4，形成4ⁿ種組合

3. 字符串操作成本：
每次組合需執行O(n)級別的字符串拼接操作（push_back與append）

##### 空間複雜度分析
空間消耗主要來自兩個部分：

1. 遞迴調用堆疊：
最大遞迴深度為n，堆疊空間複雜度O(n)

2. 結果儲存結構：
需儲存4ⁿ個長度為n的字符串，空間複雜度O(4<sup>n</sup>⋅n)