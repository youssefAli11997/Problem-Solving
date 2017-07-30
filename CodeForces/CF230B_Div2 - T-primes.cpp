#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        int i; long long x,sq; scanf("%I64d",&x); sq = sqrtl(x);
        for(i=2; i*i<=sq; i++)if(sq%i==0)break;
        if(i*i>sq && sq*sq==x && x>1)cout<<"YES\n";else cout<<"NO\n";
    }
    return 0;
}
