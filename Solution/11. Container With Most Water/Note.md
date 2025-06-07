[Container With Most Water](https://leetcode.com/problems/container-with-most-water/)
===
| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 11  | *Medium*  | `array`, `two-pointers` | **bloomberg** |

Problem Description
---
You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the i<sup>th</sup> line are `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return _the maximum amount of water a container can store_.

#### Example 1:
```
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
```
#### Example 2:
```
Input: height = [1,1]
Output: 1
```

__Notice__ that you may not slant the container.
#### Constraints:

- `n == height.length`  
- `2 <= n <= 105`.
- 0 <= `height[i]` <= 10<sup>4</sup>

---
### 2025/06/07 (hint)
Set __2 pointers__ start from `left` and `right` boundries, move the __pointer__ that points to the low one and caculate the space of the container until the _2 pointers meet_.

#### Complexity Analysis
| Space Complexity | Time Complexity | 
| :--: | :--: |
| O(1)  | O(n)|

##### Time
- All lines needed to be checked

##### Space
- Only move the pointer on the original vector.