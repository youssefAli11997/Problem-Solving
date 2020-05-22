// problem link: https://atcoder.jp/contests/dp/tasks/dp_b
// iterative solution (tabulation)
// recursive version (memoization) is below (commented)

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,k; scanf("%d %d", &n, &k);
	int h[n];
	int dp[n];

	for(int i=0; i<n; i++)
		scanf("%d", &h[i]);

	dp[0] = 0;
	dp[1] = abs(h[1]-h[0]);

	for(int i=2; i<n; i++) {
		dp[i] = abs(h[i]-h[i-1]) + dp[i-1];
		for(int j=2; j<=min(k,i); j++)
			dp[i] = min(dp[i], abs(h[i]-h[i-j]) + dp[i-j]);
	}

	printf("%d\n", dp[n-1]);

	return 0;
}

/*
// recursive version

#include <bits/stdc++.h>

using namespace std;

int h[100002];
int dp[100002];
int n, k;

int solve(int i) {
	if(i == n-1) return 0;
	if(dp[i] != -1) return dp[i];

	if(i+1 < n) dp[i] = abs(h[i]-h[i+1]) + solve(i+1);

	for(int j=2; j<=k; j++) {
		if(i+j < n) dp[i] = min(dp[i], abs(h[i]-h[i+j]) + solve(i+j));
	}

	return dp[i];
}

int main() {
	scanf("%d %d", &n, &k);

	for(int i=0; i<n; i++)
		scanf("%d", &h[i]);

	memset(dp, -1, sizeof(dp));

	printf("%d\n", solve(0));

	return 0;
}
*/
