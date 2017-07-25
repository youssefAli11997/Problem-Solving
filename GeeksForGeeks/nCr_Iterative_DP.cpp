// problem link : http://practice.geeksforgeeks.org/problems/ncr/0
// geeksforgeeks profile : http://practice.geeksforgeeks.org/user-profile.php?user=Youssef%20Ali

#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int t,n,r,dp[1002][802];

int solve(int num, int k){
    dp[0][0] = 1;
    dp[1][0] = 1;
    for(int i = 0; i<= num; i++) for(int j = 0; j <= min(i, k); j++){
        if(j == 0 || j == i)
            dp[i][j] = 1;
        else 
            dp[i][j] = (0LL + dp[i-1][j] % MOD + dp[i-1][j-1] % MOD) % MOD;
    }
    return dp[num][k];
}

int main(){
    cin>>t;
    while(t--){
        cin>>n>>r;
        cout<<solve(n,r)<<endl;
    }
    return 0;
}
