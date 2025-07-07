/*
 * @lc app=leetcode id=146 lang=cpp
 *
 * [146] LRU Cache
 */

// @lc code=start
#include <list>
#include <unordered_map>
#include <utility>
using namespace std;
class LRUCache
{
private:
    list<pair<int, int>> dlist;                              // doubly list for LRU cache (key, value)
    unordered_map<int, list<pair<int, int>>::iterator> umap; // (key, list)
    int cap;

public:
    LRUCache(int capacity) : cap(capacity)
    {
        dlist.clear();
        umap.clear();
        umap.reserve(capacity);
    }

    int get(int key)
    {
        unordered_map<int, list<pair<int, int>>::iterator>::iterator found = umap.find(key);
        if (found != umap.end())
        {
            //  update the cache
            dlist.splice(dlist.begin(), dlist, found->second);
            // dlist.erase(found->second);
            // dlist.emplace_front(pair<int, int>(key, value));
            // umap[key] = dlist.begin();

            return dlist.begin()->second;
        }
        else
        {
            return -1;
        }
    }

    void put(int key, int value)
    {
        unordered_map<int, list<pair<int, int>>::iterator>::iterator found = umap.find(key);
        if (found != umap.end())
        {
            // update the cache
            found->second->second = value;
            dlist.splice(dlist.begin(), dlist, found->second);
            // dlist.erase(found->second);
            // dlist.emplace_front(pair<int, int>(key, value));
            // umap[key] = dlist.begin();
        }
        else
        {
            if (umap.size() == cap) // list full
            {
                umap.erase(dlist.back().first);
                dlist.pop_back(); // remove the least used one
                dlist.emplace_front(pair<int, int>(key, value));
                umap[key] = dlist.begin();
            }
            else
            {
                dlist.emplace_front(pair<int, int>(key, value));
                umap[key] = dlist.begin();
            }
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
// @lc code=end
