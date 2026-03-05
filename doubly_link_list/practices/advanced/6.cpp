// Remove Duplicates in DLL
// Given a sorted doubly linked list, remove duplicate nodes.
// Bonus: do it in an unsorted list.
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
void delete_duplicate(Node* &head){
    if(!head || !head->next) return;
    Node* tmp=head;
    while(tmp && tmp->next){
        if(tmp->val==tmp->next->val){
            Node* dup=tmp->next;
            tmp->next=dup->next;
            if(dup->next) dup->next->prev=tmp;
            delete dup;
        }else{
            tmp=tmp->next;
        }
    }
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
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

   print_forward(head1);
    return 0;
}
