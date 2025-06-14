# [Reorder List](https://leetcode.com/problems/reorder-list/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 143  | *Medium*  | `linked-list` | **Unknown** |

## Problem Description

You are given the head of a singly linked-list. The list can be represented as:

```text
L0 → L1 → … → Ln - 1 → Ln
```

*Reorder the list to be on the following form:*

```text
L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
```

You may not modify the values in the list's nodes. Only nodes themselves may be changed.

### Example 1

```text
Input: head = [1,2,3,4]
Output: [1,4,2,3]
```

### Example 2

```text
Input: head = [1,2,3,4,5]
Output: [1,5,2,4,3]
```

#### Constraints

- The number of nodes in the list is in the range [1, 5 * 10<sup>4</sup>].
- `1 <= Node.val <= 1000`

---

### 2025/06/12

Using `fast` and `slow` to find the tail and the middle, reverse the right part of the list.  
Then merge the left part and the right part of the list.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(1)  | O(n)|

##### Time

- Only need to traverse the list 2 times, which is `O(n)`.

##### Space

- Only need fixed amount of pointers, which is `O(1)`.
