/*
 * @lc app=leetcode id=226 lang=cpp
 *
 * [226] Invert Binary Tree
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

void SwapNode(TreeNode *root)
{
    TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
}

void Invert(TreeNode *root)
{
    if (!root->left && !root->right)
    {
        return;
    }

    SwapNode(root);

    if (root->left)
    {
        Invert(root->left);
    }

    if (root->right)
    {
        Invert(root->right);
    }
}
class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (!root)
        {
            return nullptr;
        }

        TreeNode *tempRoot = root;
        Invert(tempRoot);
        return root;
    }
};
// @lc code=end
