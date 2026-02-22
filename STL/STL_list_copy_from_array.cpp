#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={10,20,30};
    list<int>l(a, a+3);
    for(int val : l){
        cout << val << " ";
    }
    return 0;
}