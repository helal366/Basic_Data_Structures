// Remove Specific Element
// Problem:
// Take a list of integers and an integer x.
// Remove all occurrences of x from the list.
// Print the modified list.
// Concepts practiced: list::remove().
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n >> m;
    list<int>li;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        li.push_back(x);
    }
    li.remove(m);
    for(int val:li) cout << val << " ";
    cout << endl;
    return 0;
}