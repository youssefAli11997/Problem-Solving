
/*
 - problem link : https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/monk-learning-graph-3/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt","rt",stdin);
	//freopen("out.txt","wt",stdout);
	int n,m,k; cin>>n>>m>>k; k--;
	int val[n+2];
	vector<pair<int, int> > adjList[n+2];

	for(int i=1; i<=n; i++)
		cin>>val[i];

	while(m--){
		int x,y; cin>>x>>y;
		adjList[x].push_back(make_pair(val[y], y));
		adjList[y].push_back(make_pair(val[x], x));
	}

	for(int i=1; i<=n; i++) {
		sort(adjList[i].rbegin(), adjList[i].rend()); //sorts according to first
		if((int)adjList[i].size() <= k){
			cout<<"-1";
			continue;
		}
		cout<<adjList[i][k].second<<endl;
	}

	return 0;
}
