# [Fraction to Recurring Decimal](https://leetcode.com/problems/fraction-to-recurring-decimal/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 166  | *Medium*  | `hash-table`, `math` | **google** |

## Problem Description

Given two integers representing the `numerator` and `denominator` of a fraction, return *the fraction in string format*.

If the fractional part is repeating, enclose the repeating part in parentheses.

If multiple answers are possible, return **any of them**.

It is **guaranteed** that the length of the answer string is less than <code>10<sup>4</sup></code> for all the given inputs.

### Example 1

```text
Input: numerator = 1, denominator = 2
Output: "0.5"
```

### Example 2

```text
Input: numerator = 2, denominator = 1
Output: "2"
```

### Example 3

```text
Input: numerator = 4, denominator = 333
Output: "0.(012)"
```

#### Constraints

- <code>-2<sup>31</sup> <= numerator, denominator <= 2<sup>31</sup> - 1</code>
- `denominator != 0`

---

### 2025/07/12

- Directly divide the `numerator` by `denominator` at the start for the integral part.
- For the fractional part, first *check if the remainder is repeated*. If the remainder repeat, that means there is a **repeated quotient**.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(n)  | O(n) |

##### Time

- `O(n)` for each math operation on each quotient.

##### Space

- `O(n)` for hash map to store the **remainder** with corresponding **position**.
