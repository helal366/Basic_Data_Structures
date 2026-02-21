// Insert at Any Position
// Insert a node at index idx (0-based).
// Handle head, tail, middle, invalid index, and empty list.
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
void insert_at_any_position(Node* &head, Node* &tail, int idx, int val){
   if(idx<0){
    cout << "Invalid index";
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
    int idx, val2; cin >> idx >> val2;
    insert_at_any_position(head, tail, idx, val2);
    print_forward(head);
    return 0;
} 