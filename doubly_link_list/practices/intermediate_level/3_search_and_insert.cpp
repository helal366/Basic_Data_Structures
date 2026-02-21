// Search & Insert After Value
// Insert a node after the first node with a specific value.
// If value not found, print a message.
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
void search_and_insert(Node* &head, Node* &tail, int targetVal, int newVal){
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
    Node* newNode=new Node(newVal);
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
    cout << "Count before insertion: \n";
    print_forward(head);
    int targetVal, newVal; cin >> targetVal >> newVal;
    search_and_insert(head, tail, targetVal, newVal);
    cout << "Count after insertion: \n";
    print_forward(head);
    return 0;
}