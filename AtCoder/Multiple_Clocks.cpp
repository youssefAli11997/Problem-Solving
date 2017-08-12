// link : https://abc070.contest.atcoder.jp/tasks/abc070_c
// solved inside contest
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

long long lcm(long long a, long long b){
    return a / gcd(a,b) * b;
}

int main(){
    int n; cin>>n;
    long long a[n];
    for(int i=0; i<n; i++){
        cin>>a[i]; 
    }
    long long ans = a[0];
    for(int i=1; i<n; i++){
        ans = lcm(ans, a[i]);
    }
    cout<<ans<<endl;
    return 0;
}
