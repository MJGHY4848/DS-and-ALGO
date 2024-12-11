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

    bool search(string word)
    {
        Node *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!node->containKey(word[i]))
            {
                return false;
            }
            node = node->get(word[i]);
        }
        return node->isEnd();
    }

    bool startsWith(string prefix)
    {
        Node *node = root;
        for (int i = 0; i < prefix.length(); i++)
        {
            if (!node->containKey(prefix[i]))
            {
                return false;
            }
            node = node->get(prefix[i]);
        }
        return true;
    }
};

int main(){
    Trie *myTrie = new Trie();
    vector<string> words = {"ayush", "daasi"};
    for(auto w : words){
        myTrie-> insert(w);
    }    
    if(myTrie-> search("madhav")){
        cout<< "Madhav found \n";
    }
    else{
        cout << "Madhav not found \n";
    }
    if(myTrie-> search("ayush")){
        cout<< "ayush found \n";
    }
    else{
        cout << "ayush not found \n";
    }
}