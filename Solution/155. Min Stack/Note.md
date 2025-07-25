# [Min Stack](https://leetcode.com/problems/min-stack/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 155  | *Medium*  | `stack, design` | **amazon, bloomberg, google, snapchat, uber, zenefits** |

## Problem Description

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the `MinStack` class:

- `MinStack()` initializes the stack object.
- `void push(int val)` pushes the element val onto the stack.
- `void pop()` removes the element on the top of the stack.
- `int top()` gets the top element of the stack.
- `int getMin()` retrieves the minimum element in the stack.

You must implement a solution with `O(1)` time complexity for each function.

### Example 1

```text
Input
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

Output
[null,null,null,null,-3,null,0,-2]

Explanation
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2
```

#### Constraints

- -2<sup>31</sup> <= `val` <= 2<sup>31</sup> - 1
- Methods `pop`, `top` and `getMin` operations will always be called on **non-empty** stacks.
- At most 3 * 10<sup>4</sup> calls will be made to `push`, `pop`, `top`, and `getMin`.

---

### 2025/07/07

Use 2 stacks, one for `data`, one for corresponding `minimum number`.  
When push, check *if this is smaller than* the `top()` of `minimum number stack`.

- if yes, push this number into the `minimum number stack`.
- if not, push one more current `top()` min number into `minimum number stack`, which means the corresponding data's current smallest number.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(n)  | O(1)|

##### Time

- `O(1)` for each function

##### Space

- `O(n)` for stack.
