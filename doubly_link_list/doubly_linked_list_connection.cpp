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
int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b= new Node(30);
    Node* c=new Node(40);
    Node* tail=new Node(50);
    
    head->next=a;
    a->prev=b;

    a->next=b;
    b->prev=a;

    b->next=c;
    c->prev=b;

    c->next=tail;
    tail->prev=c;
    return 0;
}