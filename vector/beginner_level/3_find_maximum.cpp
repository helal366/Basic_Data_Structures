#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    // process 1: iteration through whole loop
    int mx=v[0];
    for(int i=0; i<n; i++){
        if(v[i]>mx) mx=v[i];
    }
    cout << mx << endl;

    // process 2: using max_element() function with begin() and end() function
    int mx2= *max_element(v.begin(), v.end());
    cout << mx2 << endl;
    return 0;
}