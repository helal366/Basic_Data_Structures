// Problem:
// Create an empty list.
// Insert 3 elements at the beginning and 3 elements at the end.
// Display the list.
// Concepts practiced: push_front, push_back.
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>a;
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    a.push_front(3);
    a.push_front(2);
    a.push_front(1);
    for(int val:a) cout << val << " ";
    return 0;
}