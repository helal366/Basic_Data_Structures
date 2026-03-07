// Given a sentence, reverse the order of words.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string sentence;
    getline(cin, sentence);
    list<string>words;
    string word;
    stringstream ss(sentence);
    while(ss >> word){
        words.push_back(word);
    }
    words.reverse();
    for(auto w:words) cout << w << " ";

    return 0;
}