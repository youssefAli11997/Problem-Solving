// problem link: https://atcoder.jp/contests/dp/tasks/dp_c
// iterative solution (tabulation)
// resursive version (memoization) is below (commented)
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; scanf("%d", &n);
	int a[n], b[n], c[n]; // a -> 0, b -> 1, c -> 2

	for(int i=0; i<n; i++) {
		scanf("%d %d %d", &a[i], &b[i], &c[i]);
	}

	int dp[n][3];

	dp[0][0] = a[0];
	dp[0][1] = b[0];
	dp[0][2] = c[0];

	for(int i=1; i<n; i++) {
		dp[i][0] = a[i] + max(dp[i-1][1], dp[i-1][2]);
		dp[i][1] = b[i] + max(dp[i-1][0], dp[i-1][2]);
		dp[i][2] = c[i] + max(dp[i-1][0], dp[i-1][1]);
	}

	printf("%d\n", max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2])));

	return 0;
}

/*
// recursive version

#include <bits/stdc++.h>

using namespace std;

int dp[100002][3];
int a[100002], b[100002], c[100002];
int n;

int solve(int i, int prev) {
	if(i == n) return 0;
	if(dp[i][prev] != -1) return dp[i][prev];

	if(prev == 0) dp[i][prev] = max(b[i] + solve(i+1, 1), c[i] + solve(i+1, 2));
	if(prev == 1) dp[i][prev] = max(a[i] + solve(i+1, 0), c[i] + solve(i+1, 2));
	if(prev == 2) dp[i][prev] = max(a[i] + solve(i+1, 0), b[i] + solve(i+1, 1));

	return dp[i][prev];
}

int main() {
	scanf("%d", &n);

	for(int i=0; i<n; i++)
		scanf("%d %d %d", &a[i], &b[i], &c[i]);

	memset(dp, -1, sizeof(dp));

	printf("%d\n", max(a[0] + solve(1, 0), max(b[0] + solve(1, 1), c[0] + solve(1, 2))));

	return 0;
}
*/
