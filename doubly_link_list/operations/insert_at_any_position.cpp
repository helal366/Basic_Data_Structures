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
void insert_at_any_position(Node* &head, Node* &tail, int idx, int val){
   if(idx<0){
    cout << "Invalid index\n";
    return;
   }
   Node* newNode=new Node(val);
    // empty list
   if(head==NULL){
    if(idx!=0){
        cout << "List is empty.\n";
        delete newNode;
        return;
    }
    head=tail=newNode;
    return;
   }
   // insert at head
   if(idx==0){
        head->prev=newNode;
        newNode->next=head;
        head=newNode;
        return;
   }
   Node* tmp= head;
   // traverse to (idx-1)
   for(int i=0; i<idx-1; i++){
    if(tmp==NULL){
        cout << "Invalid index\n";
        delete newNode;
        return;
    }
    tmp=tmp->next;
   }
   if(tmp==NULL){
        cout << "Invalid index\n";
        delete newNode;
        return;
   }
   newNode->next=tmp->next;
   newNode->prev=tmp;
   tmp->next=newNode;
   if(newNode->next==NULL){
       tail=newNode;
    }else{
       newNode->next->prev=newNode;
   }
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
    insert_at_any_position(head,tail, 2, 100);
    insert_at_any_position(head,tail, 1, 200);
    insert_at_any_position(head,tail, 0, 300);
    insert_at_any_position(head,tail, 3, 400);
    insert_at_any_position(head,tail, 0, 500);
    print_forward(head);
    return 0;
}