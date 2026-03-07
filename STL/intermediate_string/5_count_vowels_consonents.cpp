// Given a string, count how many vowels and consonants exist.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    list<char>word(s.begin(), s.end());
    auto front = word.begin();
    int v=0, c=0;
    while(front!=word.end()){
        auto l=tolower(*front);
        if(l=='a' || l=='e' || l=='i' || l=='o' || l=='u'){
            v++;
        }else{
            c++;
        }
        ++front;
    }
    cout << v << " " << c << endl;
    return 0;
}