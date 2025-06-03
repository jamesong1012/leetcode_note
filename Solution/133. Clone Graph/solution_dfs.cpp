/*
 * @lc app=leetcode id=133 lang=cpp
 *
 * [133] Clone Graph
 */

// @lc code=start

#include <vector>
using namespace std;
/*
// Definition for a Node.
class Node
{
public:
    int val;
    vector<Node *> neighbors;
    Node()
    {
        val = 0;
        neighbors = vector<Node *>();
    }
    Node(int _val)
    {
        val = _val;
        neighbors = vector<Node *>();
    }
    Node(int _val, vector<Node *> _neighbors)
    {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
#define MAX_NODE 100

Node *dfs(Node *curNode, Node *bCheckTable[MAX_NODE])
{
    Node *retNode;
    if (bCheckTable[curNode->val - 1])
    {
        return bCheckTable[curNode->val - 1];
    }

    retNode = new Node(curNode->val);
    bCheckTable[curNode->val - 1] = retNode;

    for (int i = 0; i < curNode->neighbors.size(); i++)
    {
        retNode->neighbors.push_back(dfs(curNode->neighbors[i], bCheckTable));
    }
    return retNode;
}

class Solution
{
public:
    Node *cloneGraph(Node *node)
    {
        if (!node)
            return NULL;
        Node *bIsChecked[MAX_NODE] = {NULL}; // a table to record which node has been checked

        return dfs(node, bIsChecked);
    }
};
// @lc code=end
