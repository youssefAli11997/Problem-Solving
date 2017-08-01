#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll lcm(ll a , ll b){
    return a / __gcd(a,b) * b;
}

int main(){
    ll n,a,b,p,q; cin>>n>>a>>b>>p>>q;
    cout<<n / a * p + n / b * q - n / lcm(a,b) * min(p,q);
    return 0;
}
