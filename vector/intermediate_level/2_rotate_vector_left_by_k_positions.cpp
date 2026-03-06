#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin >> n >> x;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    // for(int i=0; i<x; i++){
    //     a.push_back(a[0]);
    //     a.erase(a.begin());
    // }
    rotate(a.begin(), a.begin()+x,a.end());
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}