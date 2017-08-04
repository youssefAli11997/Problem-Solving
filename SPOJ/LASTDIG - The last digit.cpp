/*
 - problem link : http://www.spoj.com/problems/LASTDIG/
 - solution by : Youssef Ali
 - spoj profile : http://www.spoj.com/users/youssef_ali/
*/

#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int n, long long p, int m){
    if(p == 0) return 1;
    if(p & 1)
        return (n % m * modularExponentiation((n*n) % m, p / 2, m) % m) % m;
    return modularExponentiation((n*n) % m, p / 2, m) % m;
}

int main(){
    int t; cin>>t;
    for(int i=0; i<t; i++){
        int a; long long b;
        cin>>a>>b;
        cout<<modularExponentiation(a, b, 10)<<endl;
    }
    return 0;
}
