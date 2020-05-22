// problem link: https://atcoder.jp/contests/dp/tasks/dp_d
// iterative solution (tabulation)
// recursive version (memoization) is below (commented)

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,W;
	scanf("%d %d", &n, &W);

	int w[n], v[n];
	for(int i=0; i<n; i++)
		scanf("%d %d", &w[i], &v[i]);

	long long dp[n][W+1];
	memset(dp, 0, sizeof(dp));

	for(int i=w[0]; i<=W; i++) {
		dp[0][i] = v[0];
	}

	for(int i=1; i<n; i++) {
		for(int rw = 0; rw <= W; rw++) {
			dp[i][rw] = dp[i-1][rw];
			if(rw >= w[i])
				dp[i][rw] = max(dp[i][rw], v[i] + dp[i-1][rw-w[i]]);
		}
	}

	// printing the table
	// for(int i=0; i<n; i++) {
	// 	for(int rw=0; rw <= W; rw++) {
	// 		printf("%lld ", dp[i][rw]);
	// 	}
	// 	printf("\n");
	// }

	printf("%lld\n", dp[n-1][W]);

	return 0;
}

/*
// recursive version

#include <bits/stdc++.h>

using namespace std;

long long dp[102][100002];
int w[102], v[102];
int n, W;

long long solve(int i, int rw) {
	if(i == n) return 0;
	if(dp[i][rw] != -1) return dp[i][rw];

	dp[i][rw] = solve(i+1, rw); // leave it
	if(rw >= w[i]) // take it
		dp[i][rw] = max(dp[i][rw], v[i] + solve(i+1, rw-w[i]));

	return dp[i][rw];
}

int main() {
	scanf("%d %d", &n, &W);

	for(int i=0; i<n; i++)
		scanf("%d %d", &w[i], &v[i]);

	memset(dp, -1, sizeof(dp));

	printf("%lld\n", solve(0, W));

	return 0;
}
*/
