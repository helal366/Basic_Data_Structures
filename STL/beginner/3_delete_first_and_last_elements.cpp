// Delete First and Last Element
// Problem:
// Take a list of integers from user input.
// Remove the first and last elements using pop_front and pop_back.
// Print the modified list.
// Concepts practiced: pop_front, pop_back.
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
    li.pop_back();
    li.pop_front();
    for(int val:li) cout << val << " ";
    return 0;
}