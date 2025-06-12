/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        if (head == nullptr || head->next == nullptr)
        {
            return nullptr;
        }
        ListNode *cur = head;
        ListNode *fast, *slow; // fast for the list tail, slow for the middle one
        fast = head;
        slow = head;
        int iNodeCount = 1; // total Node count
        int iPosOfSlow = 1; // where the middle is, if it's even, it would be (iNodeCount+1/2), index starts from 1

        while (fast->next != nullptr)
        {
            fast = fast->next;
            iNodeCount++;
            if (fast->next != nullptr)
            {
                fast = fast->next;
                iNodeCount++;
            }
            if (iNodeCount != 2)
            {
                slow = slow->next;
                iPosOfSlow++;
            }
        }

        if (iNodeCount - n == 0) // delete head
        {
            cur = head->next;
            head->next = nullptr;
            return cur;
        }

        int iPosOfN = iNodeCount - (n - 1); // count how many steps needed to go to the Node that need to be deleted

        if (iPosOfN > iPosOfSlow) // walk from the middle to the n node from the end of the list, use "slow"
        {
            cur = slow;
            for (int i = 0; i < iPosOfN - iPosOfSlow; i++)
            {
                if (i == (iPosOfN - iPosOfSlow) - 1)
                {
                    cur = slow; // cur represent the prev pointer
                }
                slow = slow->next;
            }
            cur->next = slow->next;
        }
        else // walk from the head to the n node from the end of the list, use "cur"
        {
            slow = cur;
            for (int i = 0; i < iNodeCount - n; i++)
            {
                if (i == (iNodeCount - n) - 1)
                {
                    slow = cur; // slow represent the prev pointer
                }
                cur = cur->next;
            }
            slow->next = cur->next;
        }

        return head;
    }
};
// @lc code=end
