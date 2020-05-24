// problem link: https://atcoder.jp/contests/dp/tasks/dp_h
// iterative solution (tabulation)

#include <bits/stdc++.h>

#define MOD 1000000007

using namespace std;

int main() {
	int n, m; scanf("%d %d", &n, &m);
	char grid[n][m];

	for(int i=0; i<n; i++) scanf("%s", grid[i]);

	int dp[n][m];
	dp[0][0] = 1;

	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(i == 0 && j == 0)
				continue;
			if(grid[i][j] == '#') {
				dp[i][j] = 0;
				continue;
			}

			dp[i][j] = i > 0 ? dp[i-1][j] : 0;
			dp[i][j] = (dp[i][j] + (j > 0 ? dp[i][j-1] : 0)) % MOD;
		}
	}

	printf("%d\n", dp[n-1][m-1]);

	return 0;
}
