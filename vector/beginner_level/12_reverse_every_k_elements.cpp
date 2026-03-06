#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i+=x){
        int end=min(i+x,n);
        reverse(a.begin()+i, a.begin()+end);
    }
    for(int x : a) cout << x << " "; 
    return 0;
}