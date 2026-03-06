// Given a string s, check whether it is a palindrome.
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(const string &s){
    list<char>l(s.begin(), s.end());
    auto front =  l.begin();
    auto back = l.rbegin();
    while(front != l.end() && back != l.rend()){
        if(*front != *back) return false;
        ++front; ++back;
    }
    return true;
}
int main(){
    string s;
    cin >> s;
    bool flag=isPalindrome(s);
    flag? cout << "Yes": cout << "No";
    return 0;
}