// Problem:
// Create a list of integers.
// Insert 5 integers from user input.
// Print all elements of the list.
// Concepts practiced: list creation, push_back, traversal (for loop or range-based).
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    list<int>a;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }
    for(int val:a) cout << val << " ";
    
    return 0;
}