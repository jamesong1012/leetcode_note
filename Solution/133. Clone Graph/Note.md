[Clone Graph](https://leetcode.com/problems/clone-graph/)
===
| Problem Number | Difficulty | Topic | Companies |
| :--: | :--: |:--:|:--:|
| 133  | *Medium*  | `depth-first-search`, `breadth-first-search`, `graph` | **facebook, google, pocketgems, uber** |

Problem Description
---
Given a reference of a node in a __connected__ undirected graph.

Return a __deep copy__ (clone) of the graph.

Each node in the graph contains a value (`int`) and a list (`List[Node]`) of its neighbors.
```
class Node {
    public int val;
    public List<Node> neighbors;
}
```
#### Test case format:
For simplicity, each node's value is the same as the node's index (1-indexed). For example, the first node with `val == 1`, the second node with `val == 2`, and so on. The graph is represented in the test case using an adjacency list.

__An adjacency list__ is a collection of unordered __lists__ used to represent a finite graph. Each list describes the set of neighbors of a node in the graph.

The given node will always be the first node with `val = 1`. You must return the __copy of the given node__ as a reference to the cloned graph.  


#### Example 1:
```
Input: adjList = [[2,4],[1,3],[2,4],[1,3]]
Output: [[2,4],[1,3],[2,4],[1,3]]
Explanation: There are 4 nodes in the graph.
1st node (val = 1)'s neighbors are 2nd node (val = 2) and 4th node (val = 4).
2nd node (val = 2)'s neighbors are 1st node (val = 1) and 3rd node (val = 3).
3rd node (val = 3)'s neighbors are 2nd node (val = 2) and 4th node (val = 4).
4th node (val = 4)'s neighbors are 1st node (val = 1) and 3rd node (val = 3).
```
#### Example 2:
```
Input: adjList = [[]]
Output: [[]]
Explanation: Note that the input contains one empty list. The graph consists of only one node with val = 1 and it does not have any neighbors.
```
#### Example 3:
```
Input: adjList = []
Output: []
Explanation: This an empty graph, it does not have any nodes.
```

#### Constraints:

- The number of nodes in the graph is in the range `[0, 100]`.
- `1 <= Node.val <= 100`
- `Node.val` is unique for each node.
- There are no repeated edges and no self-loops in the graph.
- The Graph is connected and all nodes can be visited starting from the given node.

---
### 2025/06/03
Using __DFS__ to check all the `node`, keep the checked node's __pointer__ in a __table__.  
When reaching a checked node, directly get the __pointer__ from the __table__ and return the node.
#### Complexity Analysis
| Space Complexity | Time Complexity | 
| :--: | :--: |
| O(n)  | O(n)|

##### Time
- Whole node needed to be checked

##### Space
- Construct the table `O(n)`, and the function stacks for the recursion `O(n)`.