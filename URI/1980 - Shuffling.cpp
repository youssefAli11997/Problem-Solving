// link : https://www.urionlinejudge.com.br/judge/en/problems/view/1980
#include <bits/stdc++.h>
using namespace std;

long long fact(int n){
    if(n <= 1) return 1;
    return n * fact(n - 1);
}

int main(){
    while(1){
        string s; cin>>s;
        if(s == "0") break;
        cout<<fact((int)s.size())<<endl;
    }
    return 0;
}
