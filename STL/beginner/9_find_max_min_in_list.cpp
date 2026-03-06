// Find Maximum and Minimum
// Problem:
// Take a list of integers.
// Find and print the maximum and minimum element.
// Concepts practiced: iteration, conditional checking, std::max, std::min.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    list<int> li;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        li.push_back(x);
    }
    int mx = *max_element(li.begin(), li.end());
    int mn = *min_element(li.begin(), li.end());
    // for(int val:li){
        // if(val>mx) mx=val;
        // else if(val<mn) mn=val;

        // mx=max(mx, val);
        // mn=min(mn, val);
    // }
    
    cout << mx << " " << mn << endl;
    return 0;
}