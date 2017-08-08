// problem link : https://www.hackerrank.com/challenges/hackerrank-in-a-string

#include <string>
#include <iostream>
using namespace std;

const string word = "hackerrank";

int main() {
    int q; cin>>q;
    while(q--) {
        string s; cin>>s;
        int x = 0;
        for(int i=0; i<s.size(); i++) if(s[i] == word[x]) x++;
        if(x == word.size())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
