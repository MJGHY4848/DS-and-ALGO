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

// Chek for Bst
bool isBST(Node* root, Node* min=NULL , Node* max=NULL){
    if(root == NULL){
        return true;
    }

    if(min!= NULL && root->data <= min->data){
        return false;
    }

    if(max!= NULL && root->data >= max->data){
        return false;
    }

    bool leftValid = isBST(root->left, min, root);
    bool rightValid = isBST(root->right, root, max);

    return leftValid and rightValid;
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data<< " ";
    inorder(root->right);
}

int main(){

    struct Node* root =  new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    // Print inorder
    inorder(root);

    if(isBST(root, NULL, NULL)){
        cout << endl<< "Valid BST" << endl;
    }
    else{
        cout << endl<< "Invalid BST"<< endl;
    }
    return 0;
}