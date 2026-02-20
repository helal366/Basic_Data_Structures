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
void insert_at_any_position(Node* &head, int idx, int val){
    if(idx<0){
        cout << "Invalid index" << endl;
        return;
    }
    Node* newnode=new Node(val);
    if(idx==0){
        if(head!=NULL){
            newnode->next=head;
            head->prev=newnode;
        }
        head=newnode;
        return;
    }
    Node* temp=head;
    for (int i = 0; i < idx-1; i++)
    {
        if(temp==NULL){
            cout << "Invalid index" << endl;
            return;
        }
        temp=temp->next;
    }
    if(temp==NULL){
        cout << "Invalid index" << endl;
        return;
    }
    newnode->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=newnode;
    }
    temp->next=newnode;
    newnode->prev=temp;
    
}
int main(){
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* tail=new Node(40);

    head->next=a;
    a->prev=head;

    a->next=b;
    b->prev=a;

    b->next=tail;
    tail->prev=b;
    insert_at_any_position(head, 2, 100);
    insert_at_any_position(head, 1, 200);
    insert_at_any_position(head, 0, 300);
    insert_at_any_position(head, 3, 400);
    insert_at_any_position(head, 0, 500);
    print_forward(head);
    return 0;
}