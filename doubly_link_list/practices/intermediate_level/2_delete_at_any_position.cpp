// Delete at Any Position
// Delete a node at index idx (0-based).
// Handle head, tail, middle, invalid index, single-node list, empty list.
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
void delete_at_any_position(Node* &head, Node* &tail, int idx){
   if(idx<0){
    cout << "Invalid index\n";
    return;
   }
    // empty list
   if(head==NULL){
       cout << "List is empty.\n";
        return;
   }
   // delete at head
      Node* tmp= head;
   if(idx==0){
        head=head->next;
        delete tmp;
        if(head==NULL){
            tail=NULL;
            return;
        }
        head->prev=NULL;
        return;
   }

   // traverse to (idx)
   for(int i=0; i<idx; i++){
    if(tmp==NULL){
        cout << "Invalid index\n";
        return;
    }
    tmp=tmp->next;
   }
   if(tmp==NULL){
        cout << "Invalid index\n";
        return;
   }
   tmp->prev->next=tmp->next;
   if(tmp->next==NULL){
        tail=tmp->prev;
   }else{
    tmp->next->prev=tmp->prev;
   }
   delete tmp;
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
    int idx; cin >> idx ;
    delete_at_any_position(head, tail, idx);
    print_forward(head);
    return 0;
} 