#include<bits/stdc++.h>
using namespace std;
int main(){
    list <int> l(10, 3);
    cout << l.size() << endl;
    // cout << *l.begin() << endl;
    for(auto it=l.begin(); it!=l.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for(int val : l){
        cout << val << " ";
    }
    return 0;
}