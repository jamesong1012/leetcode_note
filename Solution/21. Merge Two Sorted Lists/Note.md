[Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
===
| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 21  | *Easy*  | `linked-list` | **amazon, apple, microsoft, linkedin** |

Problem Description
---
You are given the heads of two sorted linked lists `list1` and `list2`.

Merge the two lists into one __sorted__ list. The list should be made by splicing together the nodes of the first two lists.

Return _the head of the merged linked list_.


#### Example 1:
```
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
```
#### Example 2:
```
Input: list1 = [], list2 = []
Output: []
```
#### Example 3:
```
Input: list1 = [], list2 = [0]
Output: [0]
```

#### Constraints:

- The number of nodes in both lists is in the range `[0, 50]`.
- `-100 <= Node.val <= 100`
- Both `list1` and `list2` are sorted in __non-decreasing__ order.

---
### 2025/06/05
Using a __pointer__ to keep track of current position, and pointer of two sorted list to __traverse and compare__ the value of both list.  
`Cur` pointer will step on the _smaller one_ after each comparison, and the corresponding list pointer will also move forward for the next operation until both list have reached the `nullptr`

#### Complexity Analysis
| Space Complexity | Time Complexity | 
| :--: | :--: |
| O(1)  | O(n)|

##### Time
- Whole node needed to be checked.

##### Space
- Only need a extra pointer to keep track of the current position.