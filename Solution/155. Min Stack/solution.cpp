/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
#include <stack>
using namespace std;

class MinStack
{

private:
    stack<int> data;
    stack<int> minNumInData;
    // consider using vector

public:
    MinStack()
    {
    }

    void push(int val)
    {
        data.push(val);
        if (minNumInData.empty())
        {
            minNumInData.push(val);
        }
        else
        {
            if (val < minNumInData.top())
            {
                minNumInData.push(val);
            }
            else
            {
                minNumInData.push(minNumInData.top());
            }
        }
    }

    void pop()
    {
        data.pop();
        minNumInData.pop();
    }

    int top()
    {
        return data.top();
    }

    int getMin()
    {
        return minNumInData.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end
