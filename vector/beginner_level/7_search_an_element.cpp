#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x; cin >> n >> x ;
    vector<int>v(n);
    bool flag=false;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i]==x) flag=true;
    }
    flag ?  cout << "Found\n" : cout << "Not found\n"; 
    return 0;
}