// problem link : http://practice.geeksforgeeks.org/problems/ncr/0
// geeksforgeeks profile : http://practice.geeksforgeeks.org/user-profile.php?user=Youssef%20Ali

#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int t,n,r,dp[1002][802];

int solve(int num, int k){
    if(num < 0 || k < 0 || num < k) return 0;
    if(num == k) return 1;
    if(dp[num][k] != 0)
        return dp[num][k];
    return dp[num][k] = (solve(num-1, k) % MOD + solve(num-1, k-1) % MOD) % MOD;
}

int main(){
    cin>>t;
    while(t--){
        cin>>n>>r;
        cout<<solve(n,r)<<endl;
    }
    return 0;
}
