// Insert After a Specific Value
// Problem:
// Take a list of integers and a value y.
// Insert a new value x after the first occurrence of y.
// Print the updated list.
// Concepts practiced: traversal with iterators, insert().
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x, y,z; cin >> n >> x >> y;
    list<int>li;
    for(int i=0; i<n; i++){
        cin >> z;
        li.push_back(z);
    }
    for(auto it=li.begin(); it!=li.end(); it++){
        if(*it==y){
            it++;
            li.insert(it, x);
            break;
        }
    }
    for(int val:li) cout << val << " ";
    return 0;
}