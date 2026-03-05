#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int first = -1, second = -1;
    for(int i=0; i<n; i++){
        if(a[i]==x){
            if(first==-1) first = i;
            second = i;
        } 
    }
    
    cout << first << " " << second << endl;
    return 0;
}