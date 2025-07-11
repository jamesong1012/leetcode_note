/*
 * @lc app=leetcode id=208 lang=cpp
 *
 * [208] Implement Trie (Prefix Tree)
 */

// @lc code=start
#include <string>
using namespace std;
#define NUM_OF_ALPHABET 26
class Trie
{
private:
    struct TrieNode
    {
        TrieNode *nextChar[NUM_OF_ALPHABET];
        bool isWord; // indicate that if it's inserted word or just a prefix of word

        TrieNode()
        {
            for (int i = 0; i < NUM_OF_ALPHABET; i++)
            {
                nextChar[i] = nullptr;
            }
            isWord = false;
        }
    };

    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode;
    }

    void insert(string word)
    {

        TrieNode *cur = root;
        int i = 0;
        while (i < word.size())
        {
            // cout << word[i];
            if (cur->nextChar[word[i] - 'a'])
            {
                cur = cur->nextChar[word[i] - 'a'];
            }
            else
            {
                cur->nextChar[word[i] - 'a'] = new TrieNode;
                cur = cur->nextChar[word[i] - 'a'];
            }

            if (i == word.size() - 1) // reach the end of string
            {
                cur->isWord = true;
            }
            i++;
        }
        // cout << endl;
    }

    bool search(string word)
    {
        TrieNode *cur = root;
        int i = 0;
        while (i < word.size())
        {
            // cout << i;
            if (cur->nextChar[word[i] - 'a'])
            {
                cur = cur->nextChar[word[i] - 'a'];
            }
            else
            {
                return false;
            }

            i++;
        }
        // cout << endl;

        return cur->isWord;
    }

    bool startsWith(string prefix)
    {
        TrieNode *cur = root;
        int i = 0;
        while (i < prefix.size())
        {
            if (cur->nextChar[prefix[i] - 'a'])
            {
                cur = cur->nextChar[prefix[i] - 'a'];
            }
            else
            {
                return false;
            }

            i++;
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
// @lc code=end
