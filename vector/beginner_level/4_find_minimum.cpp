#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    // process 1: iteration through whole loop
    int mn=v[0];
    for(int i=0; i<n; i++){
        if(v[i]<mn) mn=v[i];
    }
    cout << mn << endl;

    // process 2: using min_element() function with begin() and end() function
    int mn2= *min_element(v.begin(), v.end());
    cout << mn2 << endl;
    return 0;
}