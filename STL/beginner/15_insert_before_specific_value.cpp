// Insert Before a Specific Value
// Problem:
// Take a list and two integers x and y.
// Insert x before the first occurrence of y.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y, a;
    cin >> n >> x >> y;
    list<int> li;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        li.push_back(a);
    }
    for (auto it = li.begin(); it != li.end(); it++)
    {
        if (*it == y)
        {
            li.insert(it, x);
            break;
        }
    }
    for(int val:li) cout << val << " ";
    return 0;
}