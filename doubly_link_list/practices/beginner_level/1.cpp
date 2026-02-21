// Insert at Head
// Write a function to insert a node at the beginning of a doubly linked list.
// Edge cases: empty list, single-node list.
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
void print_forward(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp=temp->next;
    }
    cout << endl;
}
void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head = tail = newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newNode =  new Node(val);
    if(head==NULL){
        head=tail=newNode;
        return;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int val2; cin >> val2;
    insert_at_head(head, tail, val2);
    print_forward(head);
    return 0;
}