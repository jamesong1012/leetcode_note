# [Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 23  | *Hard*  | `linked-list`, `divide-and-conquer`, `heap` | **airbnb, amazon, facebook, google, linkedin, microsoft, twitter, uber** |

## Problem Description

You are given an array of `k` linked-lists `lists`, each linked-list is sorted in ascending order.

*Merge all the linked-lists into one sorted linked-list and return it.*

### Example 1

```text
Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6
```

### Example 2

```text
Input: lists = []
Output: []
```

### Example 3

```text
Input: lists = [[]]
Output: []
```

#### Constraints

- `k == lists.length`
- 0 <= k <= 10<sup>4</sup>
- `0 <= lists[i].length <= 500`
- -10<sup>4</sup> <= `lists[i][j]` <= 10<sup>4</sup>
- `lists[i]` is sorted in **ascending order**.
- The sum of `lists[i].length` will not exceed 10<sup>4</sup>.

---

### 2025/06/14

Pushing all the `Nodes` of `k` lists into **priority queue** to make the `Node` with smaller `val` get to the front.  
After constructing the **priority queue**, popping the `Node` from the queue and connect them one by one.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(n)  | O(n)|

##### Time

- Construct **priority queue** *(Heap)* need:
  - `O(n)` for traverse all Node to push.
  - `O(log(n))` for insert new element into **Heap**.
  - which is `O(n) + O(log(n)) = O(n)`
- Form the final result need `O(log(n))`, because of adjusting heap. So it will depends on what container implementing the priority queue.  

**Total** will be `O(n) + O(log(n)) = O(n)`

##### Space

- Need a heap based on the number of Node and fixed number of pointers, which will be `O(n)`.
