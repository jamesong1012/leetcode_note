/*
 * @lc app=leetcode id=143 lang=cpp
 *
 * [143] Reorder List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// brute force
using namespace std;
class Solution
{
public:
    void reorderList(ListNode *head)
    {
        int iNodeCount = 1; // count how many nodes in the list
        ListNode *cur = head;
        ListNode *tempNext; // keep the next of cur
        ListNode *next;     // find the next the cur need to point to

        if (head == nullptr || head->next == nullptr)
        {
            return;
        }

        while (cur->next != nullptr)
        {
            cur = cur->next;
            iNodeCount++;
        }
        cur = head;

        // cout << "iNodeCount = " << iNodeCount << endl;
        while (true)
        {
            tempNext = cur->next;
            next = cur;

            for (int i = 0; i < iNodeCount - 1; i++)
            {
                next = next->next;
            }
            cur->next = next;
            cur = tempNext;
            next->next = cur;

            iNodeCount -= 2;
            if (iNodeCount <= 1)
            {
                cur->next = nullptr;
                break;
            }
        }
    }
};
// @lc code=end
