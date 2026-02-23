// Merge Two Doubly Linked Lists
// Merge two sorted doubly linked lists into a new sorted list.
// Do not create new nodes — reuse existing nodes.
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
Node* merge_two_dll(Node* head1, Node* head2){
    if(!head1) return head2;
    if(!head2) return head1;
    Node* a=head1;
    Node* b=head2;
    Node* head=NULL;
    Node* tail=NULL;
    Node* pick=NULL;
    while(a && b){
        if(a->val<=b->val){
            pick=a;
            a=a->next;
        }else{
            pick=b;
            b=b->next;
        }
        pick->prev=tail;
        pick->next=NULL;
        if(!head){
            head=tail=pick;
        }else{
            tail->next=pick;
            tail=pick;
        }
    }

    Node* remaining= (a) ? a : b;
    while(remaining){
        Node* nextNode=remaining->next;
        remaining->prev=tail;
        remaining->next=NULL;
        tail->next=remaining;
        tail=remaining;
        remaining=nextNode;
    }
    return head;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val1);
    }

    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val2);
    }
    Node* head= merge_two_dll(head1, head2);
    // print_forward(head1);
    // cout << endl;
    // print_forward(head2);
    // cout << endl;
    print_forward(head);
    return 0;
}