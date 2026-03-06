// Given a string s, check whether it is a palindrome.
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    list<char>l(s.begin(), s.end());
    auto front = l.begin();
    auto back = l.end();
    back--;
    while(front != back && next(front) != back){
        if(*front != *back) return false;
        front++;
        back--;
    }
    return true;
}
int main(){
    string s; cin >> s;
    bool flag = isPalindrome(s);
    flag ? cout << "Yes" : cout << "No";
    return 0;
}