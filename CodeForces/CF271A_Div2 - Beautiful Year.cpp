#include <bits/stdc++.h>
using namespace std;

bool disting(int n){
    int dig[10] = {0};
    while(n){
        dig[n % 10]++;
        n /= 10;
    }
    for(int i=0; i<10; i++) if(dig[i] > 1)
        return false;
    return true;
}

int main(){
    int n; cin>>n;
    for(int i=n+1; ; i++) if(disting(i)){
        cout<<i<<endl;
        break;
    }
    return 0;
}
