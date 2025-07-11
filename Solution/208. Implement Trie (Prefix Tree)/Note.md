# [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/)

| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 208  | *Medium*  | `design`, `trie` | **bloomberg, facebook, google, microsoft, twitter, uber** |

## Problem Description

A [trie](https://en.wikipedia.org/wiki/Trie) (pronounced as "try") or **prefix tree** is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. There are various applications of this data structure, such as autocomplete and spellchecker.

Implement the Trie class:

- `Trie()` Initializes the trie object.
- `void insert(String word)` Inserts the string `word` into the trie.
- `boolean search(String word)` Returns `true` if the string `word` is in the trie (i.e., was inserted before), and `false` otherwise.
- `boolean startsWith(String prefix)` Returns `true` if there is a previously inserted string `word` that has the prefix `prefix`, and `false` otherwise.

### Example 1

```text
Input
["Trie", "insert", "search", "search", "startsWith", "insert", "search"]
[[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]
Output
[null, null, true, false, true, null, true]

Explanation
Trie trie = new Trie();
trie.insert("apple");
trie.search("apple");   // return True
trie.search("app");     // return False
trie.startsWith("app"); // return True
trie.insert("app");
trie.search("app");     // return True
```

#### Constraints

- `1 <= word.length, prefix.length <= 2000`
- `word` and `prefix` consist only of lowercase English letters.
- At most <code>3 * 10<sup>4</sup></code> calls **in total** will be made to `insert`, `search`, and `startsWith`.

---

### 2025/07/12

Can use array or hash table to store the **Trie** node.  
When inserting, *mark the last node as word* to represent when reach this node, there is a **inserted** word *not a prefix of other word*.

#### Complexity Analysis

| Space Complexity | Time Complexity |
| :--: | :--: |
| O(n)  | O(n) |

##### Time

- `O(n)` for each operation depends on the string length.

##### Space

- `O(n)` for each Trie node
