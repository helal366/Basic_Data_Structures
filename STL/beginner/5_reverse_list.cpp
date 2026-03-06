// Reverse a List
// Problem:
// Take a list of integers as input.
// Reverse the list using STL function.
// Print the reversed list.
// Concepts practiced: list::reverse().
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    list<int>li;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        li.push_back(x);
    }
    li.reverse();
    for(int val:li) cout << val << " ";
    return 0;
}