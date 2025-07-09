/*
 * @lc app=leetcode id=173 lang=cpp
 *
 * [173] Binary Search Tree Iterator
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <stack>
using namespace std;

class BSTIterator
{
private:
    stack<TreeNode *> nextNode;

public:
    BSTIterator(TreeNode *root)
    {
        while (root != nullptr)
        {
            nextNode.push(root);
            root = root->left;
        }
    }

    int next()
    {
        TreeNode *next = nextNode.top();
        nextNode.pop();
        if (next->right != nullptr)
        {
            TreeNode *temp = next->right;
            while (temp != nullptr)
            {
                nextNode.push(temp);
                temp = temp->left;
            }
        }
        return next->val;
    }

    bool hasNext()
    {
        return !nextNode.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
// @lc code=end
