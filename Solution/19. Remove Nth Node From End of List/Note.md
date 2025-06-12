# [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 19  | *Medium*  | `linked-list`, `two-pointers`, | **Unknown** |

## Problem Description

Given the `head` of a linked list, remove the n<sup>th</sup> node from the end of the list and return its head.

### Example 1

```text
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
```

### Example 2

```text
Input: head = [1], n = 1
Output: []
```

### Example 3

```text
Input: head = [1,2], n = 1
Output: [1]
```

#### Constraints

- The number of nodes in the list is `sz`.
- `1 <= sz <= 30`
- `0 <= Node.val <= 100`
- `1 <= n <= sz`  

**Follow up:** Could you do this in one pass?

---

### 2025/06/12

Using `fast` and `slow` pointer to find the tail and the middle `Node`.  
Then determine where is the `Node` that need to be deleted, at the right or left part of the list.

- *At the right*, we use the **middle** pointer to reach it.
- *At the left*, we start from the **head** to reach it.

**Notice:** Need to be careful of the *empty* and *one Node* situation.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(1)  | O(n)|

##### Time

- Need to traverse all the `Node`, which is `O(n)`.

##### Space

- Only need fixed amount of pointers, which is `O(1)`.
