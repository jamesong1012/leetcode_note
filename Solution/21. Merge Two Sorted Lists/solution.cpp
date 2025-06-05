/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (!list2 && list1)
            return list1;
        else if (!list1 && list2)
            return list2;
        else if (!list1 && !list2)
            return NULL;
        ListNode *head = (list1->val <= list2->val) ? list1 : list2;
        ListNode *cur = head; // a pointer to traverse and connect through all the node
        if (list1->val <= list2->val)
        {
            list1 = list1->next;
        }
        else
        {
            list2 = list2->next;
        }

        while (list1 != nullptr || list2 != nullptr)
        {
            // std::cout << list1->val << ", " << list2->val << endl;

            if (list1 == nullptr)
            {
                cur->next = list2;
                cur = list2;
                list2 = list2->next;
            }
            else if (list2 == nullptr)
            {
                cur->next = list1;
                cur = list1;
                list1 = list1->next;
            }
            else
            {
                if (list1->val <= list2->val)
                {
                    cur->next = list1;
                    cur = list1;
                    list1 = list1->next;
                }
                else
                {
                    cur->next = list2;
                    cur = list2;
                    list2 = list2->next;
                }
            }
        }

        return head;
    }
};
// @lc code=end
