#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *links[26];
    bool flag = false;
    bool containKey(char ch)
    {
        return (links[ch - 'a'] != NULL);
    }

    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
    }

    Node *get(char ch)
    {
        return links[ch - 'a'];
    }
    bool setEnd()
    {
        flag = true;
        return flag;
    }
    bool isEnd()
    {
        return flag;
    }
};

class Trie
{

private:
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }

    void insert(string word)
    {
        Node *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!node->containKey(word[i]))
            {
                node->put(word[i], new Node());
            }

            // Moves to the reference trie
            node = node->get(word[i]);
        }
        node->setEnd();
    }

    bool checkIfPrefixExists(string word)
    {
        bool fl = true;
        Node *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (node->containKey(word[i]))
            {
                node = node->get(word[i]);
                if (node->isEnd() == false)
                {
                    return false;
                }
                return false;
            }
            return true;
        }
    }
};

string completeString(int n, vector<string> &a)
{
    Trie trie;
    for (auto &it : a)
    {
        trie.insert(it);
    }
    string longest = "";
    for (auto &it : a)
    {
        if (trie.checkIfPrefixExists(it))
        {
            if (it.length() > longest.length())
            {
                longest = it;
            }
            else if (it.length() == longest.length() && it < longest)
            {
                longest = it;
            }
        }
    }

    if(longest == "") return "None";
    return longest;
}
