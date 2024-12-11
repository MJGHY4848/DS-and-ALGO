#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *links[26];
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
};

int countDistinctSubstrings(string &s){
    int cnt =0;
    Node* root = new Node();

    for(int i=0; i<s.size(); i++){
        Node* node = root;
        for(int j=0; j<s.size(); j++){
            if (!node->containKey(s[i]))
            {   
                cnt++;
                node->put(s[i], new Node());
            }

            // Moves to the reference trie
             node = node->get(s[i]);
        }
    }
    return cnt++;
}