// problem link : http://practice.geeksforgeeks.org/problems/longest-common-subsequence/0
// geeksforgeeks profile : http://practice.geeksforgeeks.org/user-profile.php?user=Youssef%20Ali

#include <bits/stdc++.h>
using namespace std;
int t, n1, n2, dp[105][105];
string s1, s2;

int solve(int i1, int i2){
    if(i1 == n1 || i2 == n2)
        return 0;
    if(dp[i1][i2] != -1)
        return dp[i1][i2];
    if(s1[i1] == s2[i2])
        return dp[i1][i2] = 1 + solve(i1 + 1, i2 + 1);
    else return dp[i1][i2] = max(solve(i1 + 1, i2), solve(i1, i2 + 1));
}

int main(){
    cin>>t;
    while(t--){
        cin>>n1>>n2;
        cin>>s1>>s2;
        memset(dp, -1, sizeof dp);
        cout<<solve(0, 0)<<endl;
    }
	return 0;
}
