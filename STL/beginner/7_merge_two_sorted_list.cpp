// Merge Two Sorted Lists
// Problem:
// Take two sorted lists of integers.
// Merge them into a single sorted list using STL function.
// Print the merged list.
// Concepts practiced: list::merge().
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin >> m;
    list<int>l1,l2;
    int x;
    for(int i=0; i<m; i++){
        cin >> x;
        l1.push_back(x);
    }
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        l2.push_back(x);
    }
    l1.merge(l2);
    for(int val:l1){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}