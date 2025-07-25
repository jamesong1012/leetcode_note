# [Binary Search Tree Iterator](https://leetcode.com/problems/binary-search-tree-iterator/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 173  | *Medium*  | `stack`, `design`, `tree` | **facebook, google, linkedin, microsoft** |

## Problem Description

Implement the `BSTIterator` class that represents an iterator over the **[in-order traversal](https://en.wikipedia.org/wiki/Tree_traversal#In-order_(LNR))** of a binary search tree (BST):

- `BSTIterator(TreeNode root)` Initializes an object of the `BSTIterator` class. The `root` of the BST is given as part of the constructor. The pointer should be initialized to a non-existent number smaller than any element in the BST.
- `boolean hasNext()` Returns `true` if there exists a number in the traversal to the right of the pointer, otherwise returns `false`.
- `int next()` Moves the pointer to the right, then returns the number at the pointer.
Notice that by initializing the pointer to a non-existent smallest number, the first call to `next()` will return the smallest element in the BST.

You may assume that `next()` calls will always be valid. That is, there will be at least a next number in the in-order traversal when `next()` is called..

### Example 1

![Example 1](https://assets.leetcode.com/uploads/2018/12/25/bst-tree.png)

```text
Input
["BSTIterator", "next", "next", "hasNext", "next", "hasNext", "next", "hasNext", "next", "hasNext"]
[[[7, 3, 15, null, null, 9, 20]], [], [], [], [], [], [], [], [], []]
Output
[null, 3, 7, true, 9, true, 15, true, 20, false]

Explanation
BSTIterator bSTIterator = new BSTIterator([7, 3, 15, null, null, 9, 20]);
bSTIterator.next();    // return 3
bSTIterator.next();    // return 7
bSTIterator.hasNext(); // return True
bSTIterator.next();    // return 9
bSTIterator.hasNext(); // return True
bSTIterator.next();    // return 15
bSTIterator.hasNext(); // return True
bSTIterator.next();    // return 20
bSTIterator.hasNext(); // return False
```

#### Constraints

- The number of nodes in the tree is in the range <code>[1, 10<sup>5</sup>]</code>.
- <code>0 <= Node.val <= 10<sup>6</sup></code>
- At most <code>10<sup>5</sup></code> calls will be made to `hasNext`, and `next`.

#### Follow up:

Could you implement `next()` and `hasNext()` to run in average `O(1)` time and use `O(h)` memory, where `h` is the height of the tree?

---

### 2025/07/09

Use stack to keep track of `next` node.

- When initialization, push all the `left` node into stack.
- When `pop()`, check if there is `right` node and push all `left` nodes of it.
- `pop()` the stack for `next()`.
- Check if stack is empty for `hasNext()`.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(h)  | O(1)|

##### Time

- Every node would be only visited twice, and `next()` would be called at most `n` times.
- Visit node is `2n`, `2n/n = 2` which is constant.
- So the **average** time is `O(1)`

##### Space

- Only need to store the node for each height, so it's `O(h)`
