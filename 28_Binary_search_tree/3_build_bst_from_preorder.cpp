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


void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data<< " ";
    inorder(root->right);
}

Node* constructBST(int preorder[], int* preorderIdx, int key, int min, int max, int n){
    if(*preorderIdx >= n){
        return NULL;
    }

    Node* root = NULL;
    if(key > min && key < max){
        root = new Node(key);
        *preorderIdx = *preorderIdx + 1;

        if(*preorderIdx < n){
            root -> left = constructBST(preorder, preorderIdx, preorder[*preorderIdx], min, key, n);
        }
        if(*preorderIdx < n){
            root ->right = constructBST(preorder, preorderIdx, preorder[*preorderIdx], key, max, n);
        }

    }

    return root;
}

void printPreorder(Node* root){
    if(root== NULL){
        return;
    }

    cout << root-> data<< " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main(){
    int preorder[] = {10, 2, 1, 13, 11};
    int n = 5;
    int preoderIdx = 0;
    Node* root = constructBST(preorder, &preoderIdx, preorder[0], INT_MIN, INT_MAX, n);

    // Print inorder
    printPreorder(root);
    return 0;
}