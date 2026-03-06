// Sort a List
// Problem:
// Take a list of integers as input.
// Sort the list in ascending order using STL.
// Print the sorted list.
// Concepts practiced: list::sort().
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
    // for(int val:li) cout << val << " ";
    li.sort();
    li.sort(greater<int>());
    for(int val:li) cout << val << " ";
    return 0;
}