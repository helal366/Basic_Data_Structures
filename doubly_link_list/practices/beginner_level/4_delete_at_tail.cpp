// Delete at Tail
// Delete the last node of the list using a tail pointer.
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
void delete_at_tail(Node* &head, Node* &tail){
    if(tail==NULL){
        cout << "List is empty.\n";
        return;
    }
    Node* tmp=tail;
    tail=tail->prev;
    delete tmp;
    if(tail==NULL){
        head=NULL;
        return;
    }
    tail->next=NULL;
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
    delete_at_tail(head, tail);
    print_forward(head);
    return 0;
}