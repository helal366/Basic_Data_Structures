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
void delete_at_any_position(Node* &head, Node* &tail, int idx){
    //negative index 
    if(idx<0){
        cout << "Invalid index\n";
        return;
    }
    // empty list
    if(head==NULL){
        cout << "List is empty\n";
        return;
    }
    Node* temp=head;
    
    // invalid positive index
    for(int i=0; i<idx; i++){
        if(temp==NULL){
            cout << "Invalid index\n";
            return;
        }
        temp=temp->next;
    }
    if(temp==NULL){
        cout << "Invalid index\n";
        return;
    }
    
    // head deletion
    if(temp==head){
        head=head->next;
        delete temp;
        if(head==NULL){
            tail=NULL;
            return;
        }
        head->prev=NULL;
        return;
    }
    // tail deletion
    if(temp==tail){
        tail=tail->prev;
        tail->next=NULL;
        delete temp;
        return;
    }
    //other middle places deletion
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;

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
    delete_at_any_position(head, tail, 2);
    print_forward(head);
    return 0;
}