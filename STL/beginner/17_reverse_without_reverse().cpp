// Reverse Using Iterator
// Problem:
// Reverse the list without using reverse().
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x; cin >> n;
    list<int>li;
    for(int i=0; i<n; i++){
        cin >> x;
        li.push_back(x);
    }
    for(auto it=li.rbegin(); it!=li.rend(); it++){
        cout << *it << " ";
    }
    return 0;
}