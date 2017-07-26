// problem link : http://practice.geeksforgeeks.org/problems/count-all-possible-paths-from-top-left-to-bottom-right/0
// geeksforgeeks profile : http://practice.geeksforgeeks.org/user-profile.php?user=Youssef%20Ali

#include <iostream>
using namespace std;

int t,n,m;

int main() {
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    int dp[n][m];
	    for(int i=0; i<n; i++)
	        dp[i][0] = 1;
	    for(int i=0; i<m; i++)
	        dp[0][i] = 1;
	    for(int i=1; i<n; i++)for(int j=1; j<m; j++){
	        dp[i][j] = (dp[i-1][j] % 1000000007 + dp[i][j-1] % 1000000007) % 1000000007;
	    }
	    cout<<dp[n-1][m-1]<<endl;
	}
	return 0;
}
