// problem link: https://atcoder.jp/contests/dp/tasks/dp_a
// iterative solution (tabulation)
// resursive version (memoization) is below (commented)

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; scanf("%d", &n);
	int h[n];
	int dp[n];

	for(int i=0; i<n; i++)
		scanf("%d", &h[i]);

	dp[0] = 0;
	dp[1] = abs(h[1]-h[0]);

	for(int i=2; i<n; i++) {
		dp[i] = min(abs(h[i]-h[i-1]) + dp[i-1], abs(h[i]-h[i-2]) + dp[i-2]);
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
int n;

int solve(int i) {
	if(i == n-1) return 0;
	if(dp[i] != -1) return dp[i];

	if(i+1 < n) dp[i] = abs(h[i]-h[i+1]) + solve(i+1);
	if(i+2 < n) dp[i] = min(dp[i], abs(h[i]-h[i+2]) + solve(i+2));

	return dp[i];
}

int main() {
	scanf("%d", &n);

	for(int i=0; i<n; i++)
		scanf("%d", &h[i]);

	memset(dp, -1, sizeof(dp));

	printf("%d\n", solve(0));

	return 0;
}
*/
