// link : https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/palindrome-string-22/
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
    string s; cin>>s;
    cout<<(palin(s)? "Palindrome":"Not Palindrome")<<"\n";
    return 0;
}
