// link : https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/palindrome-116/
#include <iostream>
using namespace std;

bool palin(string s){
    int n = s.size();
    for(int i=0; i<n; i++){
        if(s[i] != s[n-i-1])
            return false;
    }
    return true;
}

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        cout<<(palin(s)? "YES":"NO")<<"\n";
    }
    return 0;
}
