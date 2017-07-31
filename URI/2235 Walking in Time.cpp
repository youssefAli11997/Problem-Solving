// problem link : https://www.urionlinejudge.com.br/judge/en/problems/view/2235
// solution by : Youssef_Ali
// uri profile : https://www.urionlinejudge.com.br/judge/en/profile/122421

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c; cin>>a>>b>>c;
    if(a == b || b == c || a == c || a+b == c || a+c == b || b+c == a)
        cout<<"S\n";
    else
        cout<<"N\n";
    return 0;
}
