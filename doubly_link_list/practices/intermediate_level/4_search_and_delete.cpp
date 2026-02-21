// Search & Delete by Value
// Delete the first node with a given value.
// Handle head, tail, middle, value not found, empty list.
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
void search_and_delete(Node* &head, Node* &tail, int targetVal){
    if(head==NULL){
        cout << "List is Empty.\n";
        return;
    }
    Node* tmp=head;
    while(tmp!=NULL && tmp->val!=targetVal){
        tmp=tmp->next;
    }
    if(tmp==NULL){
        cout << "Value not found.\n";
        return;
    }
    if(tmp==head){
        head = head->next;
        delete tmp;
        if(head==NULL){
            tail=NULL;
        }else{            
            head->prev= NULL;
        }
    }else if(tmp==tail){
        tail=tail->prev;
        delete tmp;
        tail->next=NULL;
    }else{
        tmp->prev->next=tmp->next;
        tmp->next->prev=tmp->prev;
        delete tmp;
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
    cout << "Count before deletion: \n";
    print_forward(head);
    int targetVal; cin >> targetVal ;
    search_and_delete(head, tail, targetVal);
    cout << "Count after deletion: \n";
    print_forward(head);
    return 0;
}