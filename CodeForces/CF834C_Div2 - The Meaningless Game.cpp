#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll cubic_root(ll x){
    ll le = 0, ri = 1000005, m;
    while(le < ri){
        m = (le + ri + 1) / 2;
        if(m*m*m > x)
            ri = m - 1;
        else
            le = m;
    }
    return le;
}

int main(){
    ll n,a,b,ab3; scanf("%I64d",&n);
    while(n--){
        scanf("%I64d %I64d",&a,&b);
        ab3 = cubic_root(a*b);
        if(ab3*ab3*ab3 == a*b && a%ab3 == 0 && b%ab3 == 0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
