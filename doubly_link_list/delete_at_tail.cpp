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
void delete_at_tail(Node* &head, Node* &tail){
    if(tail==NULL){
        cout << "List is empty\n";
        return;
    }
    Node* deleteNode=tail;
    tail=tail->prev;
    delete deleteNode;
    if(tail==NULL){
        head=NULL;       
        return;
    }
    tail->next=NULL;
}
int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    Node* e=new Node(60);
    Node* tail=new Node(70);

    head->next=a;
    a->prev=head;

    a->next=b;
    b->prev=a;

    b->next=c;
    c->prev=b;

    c->next=d;
    d->prev=c;

    d->next=e;
    e->prev=d;

    e->next=tail;
    tail->prev=e;
    delete_at_tail(head, tail);
    print_forward(head);
    return 0;
}