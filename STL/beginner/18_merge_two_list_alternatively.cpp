// Merge Two Lists Alternately
// Problem:
// Take two lists and merge them alternately.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,x; cin >> m;
    list<int>li1, li2;
    for(int i=0; i<m; i++){
        cin >>x;
        li1.push_back(x);
    }
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        li2.push_back(x);
    }
    auto it1=li1.begin();
    auto it2=li2.begin();
    while(it1!=li1.end() && it2!=li2.end()){
        cout << *it1 << " ";
        cout << *it2 << " ";
        ++it1;
        ++it2;
    }
    while(it1!=li1.end()){
        cout << *it1 << " ";
        ++it1;
    }
    while(it2!=li2.end()){
        cout << *it2 << " ";
        ++it2;
    }
    return 0;
}