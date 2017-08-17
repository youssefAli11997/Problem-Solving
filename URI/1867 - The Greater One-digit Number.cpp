// link : https://www.urionlinejudge.com.br/judge/en/problems/view/1867
#include <bits/stdc++.h>
using namespace std;

int init(string s){
    int res = 0;
    for(int i=0; i<s.size(); i++){
        res = res * 10 + (s[i]-'0');
    }
    return res;
}

int oneDigVal(int n){
    if(n < 10) return n;
    int digSum = 0;
    while(n){
        digSum += n % 10;
        n /= 10;
    }
    return oneDigVal(digSum);
}

int main(){
    while(1){
        string x,y; cin>>x>>y;
        if(x == "0" && y == x) break;
        int dx = init(x);
        int dy = init(y);
        
        dx = oneDigVal(dx);
        dy = oneDigVal(dy);
        
        if(dx == dy) cout<<"0\n";
        else if(dx > dy) cout<<"1\n";
        else cout<<"2\n";
    }
    return 0;
}
