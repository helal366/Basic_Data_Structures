// Given a string s, check whether it is a palindrome.
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    list<char>l(s.begin(), s.end());
    while(l.size()>1){
        if(l.front() != l.back()) return false;
        l.pop_back();
        l.pop_front();
    }
    return true;
}
int main(){
    string s;
    cin >> s;
    bool flag = isPalindrome(s);
    flag ? cout << "Yes" : cout << "No";
    return 0;
}