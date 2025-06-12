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

// reverse the right half of the list and merge with left by two pointers
using namespace std;
class Solution
{
public:
    void reorderList(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
        {
            return;
        }
        ListNode *cur = head;
        ListNode *fast, *slow; // to find the right part of list
        fast = head;
        slow = head;
        ListNode *next, *prev;

        while (fast->next != nullptr)
        {
            fast = fast->next;
            if (fast->next != nullptr)
            {
                fast = fast->next;
            }
            slow = slow->next;
        }

        // reverse the right half
        next = slow->next;
        slow->next = nullptr;
        while (true)
        {
            if (next == fast)
            {
                fast->next = slow;
                break;
            }
            prev = slow;
            slow = next;
            next = slow->next;
            slow->next = prev;
        }

        while (true)
        {
            next = cur->next;
            cur->next = fast;
            cur = next;
            if (cur->next == nullptr) // which means reach the start pointer(*slow) of the right part
            {
                break;
            }
            next = fast->next;
            fast->next = cur;
            fast = next;
        }
    }
};
// @lc code=end
