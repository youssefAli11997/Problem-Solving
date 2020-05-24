// problem link: https://atcoder.jp/contests/dp/tasks/dp_f
// iterative solution (tabulation)

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s, t; cin >> s >> t;

	int dp[s.size()][t.size()];
	pair<int,int> parent[s.size()][t.size()];

	for(int i=0; i<s.size(); i++) {
		for(int j=0; j<t.size(); j++) {
			if(s[i] == t[j]) {
				if(i > 0 && j > 0){
					dp[i][j] = 1 + dp[i-1][j-1];
					parent[i][j] = pair<int,int>(i-1,j-1);
				}
				else {
					dp[i][j] = 1;
					parent[i][j] = pair<int,int>(i,j);
				}
			}
			else {
				int op1 = j > 0 ? dp[i][j-1] : 0;
				int op2 = i > 0 ? dp[i-1][j] : 0;

				if(op1 > op2) {
					dp[i][j] = op1;
					parent[i][j] = pair<int,int>(i,j-1);
				}
				else {
					dp[i][j] = op2;
					parent[i][j] = pair<int,int>(i-1,j);	
				}
			}
		}
	}

	// printing length of LCS
	
	//printf("%d\n", dp[s.size()-1][t.size()-1]);

	// printing LCS itself

	int i = s.size()-1, j = t.size()-1;
	string lcs = "";

	while(true) {
		pair<int, int> par = parent[i][j];
		//printf("me=(%d,%d), par=(%d,%d)\n", i,j,par.first,par.second);

		// add to the lcs if we hit an equality cell
		if(s[i] == t[j])
			lcs = s[i] + lcs;

		if((par.first == i && par.second == j) || par.first < 0 || par.second < 0)
			break;

		i = par.first;
		j = par.second;
	}

	cout << lcs << endl;

	return 0;
}
