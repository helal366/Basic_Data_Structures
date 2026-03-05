#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());
    int mx = a[0];
    int second = INT_MIN;
    for(int x :a){
        if(x < mx){
            second=x;
            break;
        }
    }
    cout << second;
    return 0;
}