// problem link: https://atcoder.jp/contests/dp/tasks/dp_g

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adjList;
int mem[100002];

int dfs(int node) {
	if(mem[node] != -1)
		return mem[node];

	int ans = 0;
	for(int child : adjList[node]) {
		ans = max(ans, 1+dfs(child));
	}
	return mem[node] = ans;
}

int main() {
	int n, m; scanf("%d %d", &n, &m);

	for(int i=0; i<n; i++) {
		adjList.push_back(vector<int>());
	}

	for(int i=0; i<m; i++) {
		int x,y;
		scanf("%d %d", &x,&y);
		adjList[x-1].push_back(y-1);
	}

	memset(mem, -1, sizeof(mem));

	int longest = 0;
	for(int i=0; i<n; i++) {
		longest = max(longest, dfs(i));
	}

	printf("%d\n", longest);

	return 0;
}
