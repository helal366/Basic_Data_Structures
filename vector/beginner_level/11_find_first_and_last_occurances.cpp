#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int first = 0, second = 0;
    for(int i=0; i<n; i++){
        if(a[i]==x){
            first=i;
            break;
        } 
    }
    for(int i=0; i<n; i++){
        if(i>first && a[i]==x){
            second=i;
        }
    }
    cout << first << " " << second << endl;
    return 0;
}