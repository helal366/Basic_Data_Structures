#include<bits/stdc++.h>
using namespace std;
int main(){
    // process 1: 
    // take input
    // print from last element
    int n; cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    for(int i=v.size()-1; i>=0; i--) cout << v[i] << " ";
    cout << endl;

    // process 2:
    // take input
    // reverse the vector using reverse() function and begin() end() iterator
    // print the vector
    int m; cin >> m;
    vector<int>a(m);
    for(int i=0; i<m; i++) cin >> a[i];
    reverse(a.begin(), a.end());
    for(int i=0; i<m; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}