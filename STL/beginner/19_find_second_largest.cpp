// Find Second Largest Element
// Problem:
// Find the second largest number in the list.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x; cin >> n;
    list<int>li;
    for(int i=0; i<n; i++){
        cin >> x;
        li.push_back(x);
    }
    int mx=INT_MIN;
    int second=INT_MIN;
    for(int val:li){
        if(val>mx){
            second=mx;
            mx=val;
        }else if(val<mx && val>second){
            second=val;
        }
    }
    cout << second << endl;
    return 0;
}