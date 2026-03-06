// Check if List is Sorted
// Problem:
// Check if a list is sorted in ascending order.
// Output YES or NO.
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
    bool flag = true;
    if(!li.size() > 1){
        auto prev = li.begin();
        auto curr = next(prev);
        while (curr != li.end())
        {
            if (*prev > *curr)
            {
                flag = false;
                break;
            }
            ++prev;
            ++curr;
        }
    }
    return 0;
}