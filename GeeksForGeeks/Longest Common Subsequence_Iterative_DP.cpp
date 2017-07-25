// problem link : http://practice.geeksforgeeks.org/problems/longest-common-subsequence/0
// geeksforgeeks profile : http://practice.geeksforgeeks.org/user-profile.php?user=Youssef%20Ali

#include <bits/stdc++.h>
using namespace std;
int t, n1, n2, dp[105][105];
string s1, s2;

int solve(){
    for(int i=0; i<=n1; i++) for(int j=0; j<=n2; j++){
        if(i == 0 || j == 0)
            dp[i][j] = 0;
        else if(s1[i-1] == s2[j-1])
            dp[i][j] = 1 + dp[i-1][j-1];
        else
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    }
    return dp[n1][n2];
}

int main(){
    cin>>t;
    while(t--){
        cin>>n1>>n2;
        cin>>s1>>s2;
        memset(dp, -1, sizeof dp);
        cout<<solve()<<endl;
        //cout<<endl;
    }
	return 0;
}
