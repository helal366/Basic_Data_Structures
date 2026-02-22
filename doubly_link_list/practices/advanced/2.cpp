// Insert in Sorted List
// Maintain a sorted doubly linked list.
// Insert a node in the correct position to keep it sorted.
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void insert_at_sort(Node* &head,Node* &tail, int num){
    Node* newNode=new Node(num);
    if(head==NULL){
        head=tail=newNode;
        return;
    }
    Node* tmp=head;
    while (tmp!=NULL  && tmp->val<num)
    {
        tmp=tmp->next;
    }
    if(tmp==head){
        newNode->prev=NULL;
        newNode->next=tmp;
        tmp->prev=newNode;
        head=newNode;
    }else if(tmp==NULL){
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }else{
        tmp->prev->next=newNode;
        newNode->prev=tmp->prev;
        newNode->next=tmp;
        tmp->prev=newNode;
    }
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    // int num; cin >> num;
    print_forward(head);
    cout << endl;
    insert_at_sort(head, tail, 70);
    print_forward(head);
    return 0;
}