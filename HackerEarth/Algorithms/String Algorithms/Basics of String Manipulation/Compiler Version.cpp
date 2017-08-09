// problem link : https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/compiler-version-2/
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, res;
    while(getline(cin, s)){
        res = "";
        int i=0;
        for(; i<(int)s.size()-1; i++){
            if(s[i] == '/' && s[i+1] == '/') break;
            if(s[i] == '-' && s[i+1] == '>'){
                res += '.';
                i++;
            }
            else
                res += s[i];
        }
        res += s.substr(i);
        cout<<res<<endl;
    }
    return 0;
}
