// problem link : http://practice.geeksforgeeks.org/problems/ncr/0
// geeksforgeeks profile : http://practice.geeksforgeeks.org/user-profile.php?user=Youssef%20Ali

#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int t,n,r;

int solve(int num, int k){
    int dp[k+1];
    memset(dp, 0, sizeof dp);
    dp[0] = 1;
    for(int i = 1; i <= num; i++){
        for(int j = min(i,k); j > 0; j--)
            dp[j] = (dp[j] % MOD +  dp[j-1] % MOD) % MOD;
    }
    return dp[k];
}

int main(){
    cin>>t;
    while(t--){
        cin>>n>>r;
        cout<<solve(n,r)<<endl;
    }
    return 0;
}
