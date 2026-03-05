#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(),v.end());

    // iterating through a loop and using erase() 
    int i=0;
    while(i<v.size()-1){
        if(v[i]==v[i+1]){
            v.erase(v.begin()+i+1);
        }else{
            i++;
        }
    }
    for(int x: v)cout << x << " ";
    cout << endl;

    // using unique() and erase() function with begin() and end() 
    int m; cin >> m;
    vector<int>a(m);
    for(int i=0; i<m; i++) cin >> a[i];
    sort(a.begin(), a.end());
    auto it = unique(a.begin(), a.end());
    a.erase(it, a.end());
    for(int y: a) cout << y << " ";
    cout << endl;
    return 0;
}