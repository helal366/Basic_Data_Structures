// Remove Duplicate Elements
// Problem:
// Take a list of integers. Remove duplicate elements and print the list.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x; cin >> n;
    list<int>li;
    for(int i=0; i<n; i++){
        cin >> x;
        li.push_back(x);
    }
    li.sort();
    li.unique();
    for(int val:li) cout << val << " ";
    return 0;
}