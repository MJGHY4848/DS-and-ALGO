#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }
};

void insertAtHead(node* &head, int val){
    node* n = new node (val);
    n -> next = head;
    head = n;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head==NULL){
        head= n;
        return ;
    }

    node* temp = head;
    while(temp-> next != NULL){
        temp = temp->next;
    }
    temp -> next = n;
}

void deleteAtHead(node* &head){
    node* todelete = head;
    head = head-> next;
    delete todelete;
}

void deletion(node* &head, int val){

    if(head == NULL){
        return;
    }

    if(head->next==NULL){
        deleteAtHead(head);
        return ;
    }

    node* temp = head;
    while (temp -> next-> data!= val){
        temp = temp-> next;
    }
    
    node* todelete = temp -> next;
    temp -> next = temp-> next -> next;

    delete todelete;
    
}

void display(node* head){
    node * temp = head;
    while(temp!= NULL){
        cout << temp->data << " ";
        temp = temp-> next;
    }
    cout << endl;
}

node* reverseRecursive(node* &head){

    if(head==NULL || head-> next ==NULL){
        return head;
    }

    node* newhead= reverseRecursive(head-> next);
    head->next->next =head;
    head-> next = NULL;

    return newhead;
}

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);

    node* newhead = reverseRecursive(head);
    display(newhead);

    return 0;
}