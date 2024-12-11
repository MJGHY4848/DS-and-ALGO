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

Node* insertBST(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data){
        root ->left = insertBST(root->left, val);
    }
    else{
        root->right = insertBST(root->right, val);
    }

    return root;
}

Node* searchInBst(Node* root, int key){
    if(root==NULL){
        return NULL;
    }

    if(root->data == key){
        return root;
    }

    // data > key
    if(root->data > key){
        return searchInBst(root->left, key);
    }

    // data < key
    return searchInBst(root->right, key);
}

int main(){

    struct Node* root =  NULL;
    root = insertBST(root,5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 6);

    if(searchInBst(root, 10) == NULL){
        cout << "Key doent exist"<< endl;
    }
    else{
        cout<< "Key exists"<<endl;
    }
    return 0;
}