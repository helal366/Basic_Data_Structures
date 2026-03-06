// Delete All Even Numbers
// Problem:
// Take a list of integers.
// Remove all even numbers from the list.
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
    for(auto it=li.begin(); it!=li.end(); ){
        if(*it%2==0){
            it=li.erase(it);
        }else{
            ++it;
        }
    }
    for(int val:li) cout << val << " ";
    return 0;
}