// Swap First and Last Element
// Problem:
// Take a list and swap the first and last elements.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x; cin >> n;
    list<int>li;
    for(int i=0; i<n; i++){
        cin >> x;
        li.push_back(x);
    }
    if(n>1){
        swap(li.front(), li.back());
    }
    for(int val:li) cout << val << " ";
    return 0;
}