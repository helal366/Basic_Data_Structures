// Remove all spaces from a string.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    list<char>li(s.begin(), s.end());
    auto it=li.begin();
    while(it!=li.end()){
        if(*it==' '){
            it=li.erase(it);
        }else{
            ++it;
        }
    }
    for(char c:li)cout << c ;
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string sentence;
//     getline(cin, sentence);
//     string word;
//     stringstream ss(sentence);
//     while(ss >> word){
//         cout << word;
//     }
//     return 0;
// }