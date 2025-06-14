/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
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
#include <vector>
#include <queue>
using namespace std;

// define a struct to compare the "val" of 2 Node
struct MinHeapComparator
{
    bool operator()(ListNode *lhs, ListNode *rhs)
    {
        return lhs->val > rhs->val; // smaller val queue in front
    }
};

class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        if (lists.empty())
        {
            return nullptr;
        }
        priority_queue<ListNode *, vector<ListNode *>, MinHeapComparator> minHeap;

        bool bIsElement = false;
        ListNode *cur;
        // push every Node into priority queue
        do
        {
            bIsElement = false;
            for (int i = 0; i < lists.size(); i++)
            {
                if (lists[i] != nullptr)
                {
                    minHeap.push(lists[i]);
                    cur = lists[i];
                    lists[i] = lists[i]->next;
                    cur->next = nullptr;
                    bIsElement = true;
                }
            }
        } while (bIsElement);

        if (minHeap.empty())
        {
            return nullptr;
        }

        // initialize the result list

        ListNode *result = minHeap.top();
        minHeap.pop();
        cur = result;
        while (!minHeap.empty())
        {
            cur->next = minHeap.top();
            cur = cur->next;
            minHeap.pop();
        }

        return result;
    }
};
// @lc code=end
