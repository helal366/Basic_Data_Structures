// Print Middle Element
// Problem:
// Take n integers in a list and print the middle element.
// If n is even, print the second middle element.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x; cin >> n;
    list<int>li;
    for(int i=0; i<n; i++){
        cin >> x;
        li.push_back(x);
    }
    auto slow=li.begin();
    auto fast=li.begin();
    while(fast!=li.end() && next(fast)!=li.end()){
        slow++;
        fast++; fast++;
    }
    cout << *slow << endl;
    return 0;
}