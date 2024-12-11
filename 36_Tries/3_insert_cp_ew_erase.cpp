#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *links[26];
    int cntEndWith = 0;
    int cntPrefix = 0;

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
    
    void increaseEnd(){
        cntEndWith++;
    }

    void increasePrefix(){
        cntPrefix++;
    }

    void deleteEnd(){
        cntEndWith--;
    }

    void reducePrefix(){
        cntPrefix--;
    }

    int getEnd(){
        return cntEndWith;
    }

    int getPrefix(){
        return cntPrefix;
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
             node->increasePrefix();
        }
        node->increaseEnd();
    }

    int countWordsEqualTo(string &word)
    {
        Node *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (node->containKey(word[i]))
            {
                node = node->get(word[i]);
            }
            else{
                return 0;
            }
        }
        return node->getEnd();
    }

    bool countWordsStartingWith(string prefix)
    {
        Node *node = root;
        for (int i = 0; i < prefix.length(); i++)
        {
            if (node->containKey(prefix[i]))
            {
                node = node->get(prefix[i]);
            }
            else return 0;
        }
        return node->getPrefix();
    }

    void erase(string &word){
        Node* node = root;
        for(int i=0; i<word.size(); i++){
            if (node->containKey(word[i]))
            {
                node = node->get(word[i]);
                node->reducePrefix();
            }
            else return ;
        }
        node->deleteEnd();
    }
};