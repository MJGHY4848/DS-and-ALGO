#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node (int val){
        data = val;
        left=NULL;
        right = NULL;
    }
};

// Is Identical
bool isIdentical(Node* root1, Node* root2){
    if(root1 ==NULL && root2 == NULL){
        return true;
    }

    else if(root1 == NULL || root2 == NULL){
        return false;
    }

    else{

        bool cond1 = root1->data == root2->data;
        bool cond2 = isIdentical(root1->left, root2->left);
        bool cond3 = isIdentical(root1->right, root2->right);

        if(cond1 && cond2 && cond3){
            return true;
        }
        return false;
    }
}

int main(){

    struct Node* root =  new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);

    Node* root2 = new Node(6);
    root2->left = new Node(3);
    root2->right = new Node(10);

    if(isIdentical(root, root2)){
        cout<< true<< endl;
    }
    else{
        cout<< false<< endl;
    }
    return 0;
}