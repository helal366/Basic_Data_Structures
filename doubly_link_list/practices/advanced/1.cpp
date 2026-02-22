// Reverse a Doubly Linked List
// Reverse the list in place (O(n), O(1) space).
// Update head and tail correctly.
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val){
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};
void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode= new Node(val);
    if(tail==NULL){
        head = tail = newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void print_forward(Node* head){
    Node* tmp=head;
    while(tmp!=NULL){
        cout << tmp->val << " ";
        tmp=tmp->next;
    }
}
void reverse_dll(Node* &head, Node* &tail){
    Node* curr=head;
    Node* tmp=NULL;
    while(curr!=NULL){
        tmp=curr->prev;
        curr->prev=curr->next;
        curr->next=tmp;
        curr=curr->prev;
    }
    tmp=head;
    head=tail;
    tail=tmp;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true){
        cin >> val;
        if(val==-1){
            break;
        }
        insert_at_tail(head, tail, val);
    }
    reverse_dll(head, tail);
    print_forward(head);
    return 0;
}