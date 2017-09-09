#include <bits/stdc++.h>
using namespace std;

int memo[102][102];
int solve(int n, int k){
    if(k == 1) return 1;
    if(memo[n][k] != -1) return memo[n][k];
    int ans = 0;
    for(int x=0; x<=n; x++){
        ans = (long long)(ans + solve(n-x, k-1)) % 1000000;
    }
    return memo[n][k] = ans;
}

int main(){
    int n,k;
    while(true){
        cin>>n>>k;
        if(!n&&!k) break;
        memset(memo, -1, sizeof memo);
        cout<<solve(n,k)<<endl;
    }
    return 0;
}
