// solved inside the contest
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    char b,e; cin>>b>>e;
    int n; cin>>n;
    n %= 4;
    map<char,int> c;
    c['^'] = 0;
    c['>'] = 1;
    c['v'] = 2;
    c['<'] = 3;
    int bi = c[b];
    int ei = c[e];
    if(n == 2 || (bi == ei && n == 0)){
        cout<<"undefined";
        return 0;
    }
    if(bi-ei == n || bi-ei == n-4){
        cout<<"ccw";
        return 0;
    }
    if(bi-ei == -n || bi-ei == 4-n){
        cout<<"cw";
        return 0;
    }
    cout<<"undefined";
    return 0;
}
