#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={10,20,30,40,50,60};
    list<int>l(v.begin(),v.end());
    for(int val:l){
        cout << val << " ";
    }
    cout << endl ;
    return 0;
}