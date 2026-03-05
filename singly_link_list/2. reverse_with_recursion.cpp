#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;

        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};
void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode= new Node(val);
    if(!head){
        head=tail=newnode;
    }else{
        tail->next=newnode;
        tail=newnode;
    }
}
void print_link_list(Node* head){
    Node* tmp=head;
    while(tmp){
        cout << tmp->val << " ";
        tmp=tmp->next;
    }
    cout << endl;
}
void reverse_link_list(Node* &head, Node* tmp, Node* &tail){
    if(!tmp->next){
        head=tmp;
        return;
    }
    reverse_link_list(head, tmp->next, tail);
    tmp->next->next=tmp;
    tmp->next=NULL;
    tail=tmp;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    
    int val; 
    while(true){
        cin >> val;
        if(val==-1) break;
        insert_at_tail(head, tail, val);
    }
    print_link_list(head);
    reverse_link_list(head, head, tail);
    print_link_list(head);
    return 0;
}