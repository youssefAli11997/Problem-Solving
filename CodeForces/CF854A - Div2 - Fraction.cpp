#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i=n/2+1; i<n; i++)
        if(__gcd(n-i, i) == 1){
            cout<<n-i<<" "<<i<<endl;
            break;
        }
    return 0;
}
