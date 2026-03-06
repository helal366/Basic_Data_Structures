// Count Occurrences of an Element
// Problem
// Take a list of integers.
// Take an integer x as input.
// Count how many times x appears in the list.
// Concepts practiced: for loop, conditional counting.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x; cin >> n >> x;
    list<int>li;
    int a, cnt=0;
    for(int i=0; i<n; i++){
        cin >>a;
        li.push_back(a);
        if(a==x) cnt++;
    }
    cout << cnt << endl;
    return 0;
}