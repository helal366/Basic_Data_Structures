#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    auto it= remove(a.begin(), a.end(), x);
    a.erase(it, a.end());

    for(int y: a) cout << y << " ";
    return 0;
}